#include "holberton.h"

int main(int argc, char *argv[], char **envp)
{
	char *str = NULL;

	str = _getenv("PATH", environ);

	printf("%s\n", str);

	(void)argc;
	(void)envp;
	(void)argv;

	return (0);
}
/**
 * _getenv - function that return a desired env info
 * @var: The enviroment variable to get
 * @environ: The envirment parameters array
 * Return: The string with the content of the variable
 */
char *_getenv(char *var, char **environ)
{
	char *env_value;
	char *_var;
	unsigned int i, length;

	_var = malloc(sizeof(char) * 200);
	for (i = 0; environ[i] != '\0'; i++)
	{
		if (strncmp("PATH=", environ[i], 5) == 0)
		{
			printf("%s\n", environ[i]);
		}
	}
	(void) _var;
	(void) var;
	(void) env_value;
	(void) length;
	return (0);
}
