#include "holberton.h"

int main()
{
	int status = 1, k, child, fstatus;
	char *readline = NULL, **tokens, *dup_readline;

	do
	{
		printf("$ ");
		readline = read_line();
		dup_readline = strdup(readline);
		tokens = tokenizer(readline);

		if (readline != NULL)
			printf("%s\n", dup_readline);
		for (k = 0; tokens[k] != NULL; k++)
		{
			printf( "Tokens[%d]: %s\n", k, tokens[k]);
		}
		child = fork();
		if (child == 0)
		{
			execve(tokens[0], tokens, NULL);
		} else
		{
			wait(&fstatus);
		}
		free(readline);
		free(tokens);
		free(dup_readline);
	} while (status);

	return (0);
}
