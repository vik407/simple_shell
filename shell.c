#include "holberton.h"
/**
 * Simple Shell - Write a simple UNIX command interpreter.
 * 
 * */

int main(int argc, char **argv, char **envp)
{
	int status = 1, k;
	char *readline = NULL, **tokens, *dup_readline = NULL;

	do {
		printf("$ ");
		readline = read_line();
		if (readline != NULL)
		{
			dup_readline = strdup(readline);
			tokens = tokenizer(readline);
			run_execve(tokens);
			free(tokens);
			free(dup_readline);
			free(readline);
		} else
		{
			free(readline);
		}
	} while (status);
	(void) argc;
	(void) argv;
	(void) envp;
	(void) k;
	return (0);
}
