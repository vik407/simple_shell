#include "holberton.h"
/**
 * run_execve - function that execute an app from the user input
 * @tokens: Array of commands that the user send
 * @env: the ENV variables
 * Return: The user command
 */

int run_execve(char **tokens)
{
	int run, child, child_status;
	char *app, *app_exists;

	app_exists = NULL;
	run = 0;

	/* Tomar el token[0] y validar si lo encuentra en el Path */
	app = tokens[0];
	app_exists = run_flag(app);

	if (app_exists)
	{
		child = fork();
		if (child == 0)
		{
			run = execve(app_exists, tokens, NULL);
				/* Manejo de errores */
		} else
		{
			wait(&child_status);
			/* analizar child_status retornar estaddo */
		}
	} else
	{
		/* Implementar Built ins */
		if (strncmp("exit", app, 3) == 0)
		{
			printf("%s", "env here! \n");
		} else
		{
			/* it's an error not found <hshshs>: command not found */
			printf("%s", "No such file or directory \n");
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
char *run_flag(char *app)
{
	int i, _access = 0;
	char *res = NULL, *str, *_str = NULL, *__str = NULL, **_path;

	str = getenv("PATH");
	if (app)
	{
		_str = _strdup(str);
		__str = malloc(sizeof(char) * 200);
		_path = tokenizer(_str);
		res = app;
		for (i = 0; _path[i] != NULL; i++)
		{
			strcpy(__str, _path[i]);
			strcat(__str, "/");
			strcat(__str, app);
			_access = access(__str, F_OK | R_OK | X_OK);
			if (_access == 0)
			{
				/*printf( "Found at [%d]: %s\n", i, __str);*/
				res = _strdup(__str);
			}
		}
		free(_path);
		free(__str);
		free(_str);
	}
	return (res);
}
/**
 * _getenv - function that return a desired env info
 * @var: The enviroment variable to get
 * Return: The string with the content of the variable
 */
char *_getenv(char *var)
{
	char *res = NULL;

	if (var != NULL)
	{

	}
	return (res);
}
