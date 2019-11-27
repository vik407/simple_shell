#include "holberton.h"
/**
 * read_line - function that get the user input
 * void: n/a
 * Return: The user command
 */
char *read_line(void)
{
	size_t buffersize = 0;
	int readline_status = NULL;
	char *buff = NULL;

	readline_status = getline(&buff, &buffersize, stdin);
	buff[readline_status - 1] = '\0';
	if (readline_status > 1)
	{
		if (buff[0] != 0)
		{
			return (buff);
			free(buff);
		}
	} else if (readline_status == -1)
	{
		_putchar('\n');
		free(buff);
		exit(0);
	}
	return (0);
}
