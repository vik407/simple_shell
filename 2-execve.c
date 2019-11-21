#include "holberton.h"
/*
 * run_execve - function that execute an app from the user input
 * @tokens: Array of commands that the user send
 * @env: the ENV variables
 * Return: The user command
 */

int run_execve(char **tokens, char **env)
{
	int res, child, child_status;
	char *app, *app_exists;
	env = NULL;
	app_exists = NULL;
	res = 0;

	/* Tomar el token[0] y validar si lo encuentra en el Path */
	app = tokens[0];
	app_exists = run_flag(app);

	if (app_exists)
	{
		child = fork();
		if (child == 0)
		{
			res = execve(app_exists, tokens, env);
			if (res == -1)
				exit(EXIT_FAILURE);
		} else
		{
			wait(&child_status);
		}
	} else
	{
		/* Implementar Built ins */
		if (strncmp("env", app, 3) == 0)
		{
			/* Return the env */
		} else
		{
			/* it's an error not found <hshshs>: command not found */
		}
	}
	return (res);
}
/*
 * run_flag - function that search if application exists in the PATH
 * @app: The token value with the app to search
 * Return: if app exists return 1 either NULL
 */
char *run_flag(char *app)
{
	char *res;

	res = NULL;
	if (app != NULL)
	{
		res = "/bin/ls";
	}
	/* tomar el token[0] y buscarlo en en array del path */
	
	/* Leer el path 
	la variable de entorno envp[] 3ra opcion
	*/

	/* tokenizar el path */

	/* Por cada unode los del path (tokens)  hacer stat si encuentra el archivo */

	/* Si encuentra el ejecutable retornar -> path completo */

	/* Free the variable that return the path */
	return res;
}