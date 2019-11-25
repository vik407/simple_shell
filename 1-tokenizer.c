#include "holberton.h"
/**
 * tokenizer - idk
 * @read_line: The user input to convert
 * void: n/a
 * Return: The user command
 */
char **tokenizer(char *read_line)
{
	char **tokens = NULL;
	char *token, *_token, *_str = NULL;
	int i = 0, j;

	if (read_line != NULL)
	{
		_str = strdup(read_line);
		_token = strtok(_str, " :");
		for (j = 0; _token != NULL; j++)
			_token = strtok(NULL, " :");
		/* Create the malloc */
		tokens =  malloc((j + 1) * sizeof(char *));
		if (tokens == NULL)
			return (NULL);
		token = strtok(read_line, " :");
		/* The array of tokens */
		for (i = 0; token != NULL; i++)
		{
			tokens[i] = token;
			token = strtok(NULL, " :");
		}
		free(_str);
	}
	tokens[i] = NULL;
	return (tokens);
}