#include "holberton.h"

int main(int argc, char *argv[], char *envp[])
{
	int status = 1, k;
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
		run_execve(tokens, NULL);

		free(readline);
		free(tokens);
		free(dup_readline);
	} while (status);
	(void) argc;
	(void) argv;

	k = 0;
	while(envp[k] != '\0')
	{
		printf("%s\n", envp[k]);
		k++;
	}

	return (0);
}
