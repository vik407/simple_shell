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
		return (buff);
	} else if (readline_status == -1 || buff[0] == 0)
	{
		printf("\n");
		exit(0);
	}
	free(buff);
	return (0);
}

