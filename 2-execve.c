#include "holberton.h"
/**
 * run_execve - function that execute an app from the user input
 * @tokens: Array of commands that the user send
 * @env: the ENV variables
 * Return: The user command
 */

int run_execve(char **tokens, char **envp)
{
	int run, child, child_status;
	char *app, *app_exists;

	app_exists = NULL;
	run = 0;
	/* Get the app name to search */
	app = tokens[0];
	app_exists = run_flag(app, envp);
	if (app_exists != NULL)
	{
		child = fork();
		if (child == 0)
		{
			run = execve(app_exists, tokens, NULL);
			/* Error Handling */
		} else
		{
			wait(&child_status);
			/* analizar child_status retornar estaddo */
		}
	} else
	{
		/* Built ins */
		if (_strncmp("exit", tokens[0], 5) == 0 && app != '\0')
		{
			exit(0);
		}
		else if (_strncmp("env", tokens[0], 4) == 0)
		{
			_getenv("ALL", envp);
		} else
		{
			/* If no exist in built ins */
			_puts(app, 0);
			_puts(": not found", 1);
		}
	}
	free(app_exists);
	return (run);
}
/**
 * run_flag - function that search if application exists in the PATH
 * @app: The token value with the app to search
 * Return: if app exists return 1 either NULL
 */
char *run_flag(char *app, char **envp)
{
	int i, _access = 0;
	char *res = NULL, *str, *_str = NULL, *__str = NULL, **_path;

	str = getenv("PATH");
	/*str = _getenv("PATH", envp);*/
	if (app && _strncmp("env", app, 4) != 0)
	{
		_str = _strdup(str);
		__str = malloc(sizeof(char) * 200);
		_path = tokenizer(_str);
		for (i = 0; _path[i] != NULL; i++)
		{
			strcpy(__str, _path[i]);
			strcat(__str, "/");
			strcat(__str, app);
			_access = access(__str, F_OK | R_OK | X_OK);
			if (_access == 0)
			{
				res = _strdup(__str);
				break;
			}
		}
		free(_path);
		free(__str);
		free(_str);
	}
	(void) envp;
	return (res);
}
/**
 * _getenv - function that return a desired env info
 * @var: The enviroment variable to get
 * Return: The string with the content of the variable
 * 
 */
char *_getenv(char *var, char **envp)
{
	char *res = NULL;
	int i;

	for (i = 0; envp[i] != '\0'; i++)
	{
		if (_strncmp(var, "ALL", 4) == 0)
			_puts(envp[i], 1);
		else
		{
			if (_strncmp(var, "PATH", 5) == 0 &&
				_strncmp(envp[i], "PATH", 5)  == 0)
			{
				res = envp[i];
				break;
			}
		}
	}
	return (res);
}
