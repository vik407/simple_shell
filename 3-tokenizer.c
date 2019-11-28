#include "holberton.h"
/**
 * tokenizer - Create tokens by desired separator
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
		_str = _strdup(read_line);
		_token = strtok(_str, " :");
		for (j = 0; _token != NULL; j++)
			_token = strtok(NULL, " :");
		/* Create the malloc */
		tokens =  malloc((j + 1) * sizeof(char *));

		if (tokens == NULL)
			return (NULL);

		token = strtok(read_line, " :");

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
/**
 * is_a_path - Function to know if the token /is/a/path
 * @token: The token to check if is a path
 * Return: 1 if is a path 0 if not
 */
char is_a_path(char *token)
{
	char *str;
	int i, res = 0;

	str = strtok(token, "/");
	for (i = 0; str != NULL; i++)
	{
		str = strtok(NULL, "/");
	}

	if(i > 1)
		res = 1;

	return (res);
}
