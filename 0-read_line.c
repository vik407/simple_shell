#include "holberton.h"
/**
 * read_line - function that get the user input
 * void: n/a
 * Return: The user command
 */
char *read_line(void)
{
	size_t buffersize = 0;
	int readline_status;
	char *buff;

	readline_status = getline(&buff, &buffersize, stdin);
	buff[readline_status - 1] = '\0';
	if (readline_status > 1)
	{
		return (buff);
	} else if (readline_status == -1)
	{
		printf("\n");
		free(buff);
		exit(0);
	}
	return (0);
}
