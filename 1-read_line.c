#include "holberton.h"
/**
 * read_line - function that get the user input
 * void: n/a
 * Return: The user command
 */
char *read_line(void)
{
	size_t buffersize = 0;
	int readline_status = 0;
	char *buff = NULL;

	readline_status = getline(&buff, &buffersize, stdin);
	if (readline_status == -1)
	{
		_putchar('\n');
		free(buff);
		exit(0);
	}
	buff[readline_status - 1] = '\0';
	return (buff);
}
