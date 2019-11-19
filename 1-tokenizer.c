#include "holberton.h"
/*
 * read_line - function that get the user input
 * void: n/a
 * Return: The user command
 */
char **tokenizer(char *read_line)
{
	char **tokens = NULL;
	char *token;
	int i = 0;
	/*TODO strcount cantidad de palabras de readline y reemplazar BUFFER_SIZE*/

	tokens =  malloc(BUFFER_SIZE * sizeof(char*));
	if (tokens == NULL)
		return (NULL);

	if (read_line != NULL)
	{
		token = strtok(read_line, " ");
		for (i = 0; token != NULL; i++)
		{
			tokens[i] = token;
			token = strtok(NULL, " ");
		}
	}
	tokens[i] = NULL;
	return tokens;
}
