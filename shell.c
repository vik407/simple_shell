#include "holberton.h"

int main(int argc, char **argv, char **envp)
{
	int status = 1, k;
	char *readline = NULL, **tokens, *dup_readline = NULL;

	do
	{
		printf("$ ");
		readline = read_line();
		if (readline != NULL)
		{
			dup_readline = strdup(readline);
			tokens = tokenizer(readline);
			/*printf("%s\n", dup_readline);*/
			/*for (k = 0; tokens[k] != NULL; k++)
			{
				printf( "Tokens[%d]: %s\n", k, tokens[k]);
			}*/
			run_execve(tokens);
			free(tokens);
			free(dup_readline);
		}
	} while (status);
	(void) argc;
	(void) argv;
	(void) envp;
	(void) k;
	return (0);
}
