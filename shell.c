#include "holberton.h"
/**
 * Simple Shell - Write a simple UNIX command interpreter.
 * 
 * */

int main(int argc, char **argv, char **envp)
{
	int status = 1, is_interactive;
	char *readline = NULL, **tokens, *_readline = NULL;

	is_interactive = isatty(STDIN_FILENO);
	if (is_interactive)
		hi();
	do {
		prompt();
		readline = read_line();
		_readline = _strdup(readline);
		tokens = (_readline != NULL) ? tokenizer(_readline) : NULL;
		run_execve(tokens, envp);
		free(tokens);
		free(readline);
		free(_readline);
	} while (status);

	(void) argc;
	(void) argv;
	(void) envp;
	return EXIT_SUCCESS;
}
/**
 * hi - A message to welcome user in interactive mode
 * Return: welcome screen
 */
void hi()
{
	printf("\033[1;33m");
	printf("============================================\n");
	printf("========== INTERACTIVE MODE ================\n");
	printf("============================================\n");
	printf("\n");
	printf("\033[0m");
}
/**
 * prompt - The shell prompt used and showed to the user
 * Return: text
 */
void prompt()
{
	char *_usrpath = getcwd(NULL, 1024);
	char hostname[] = "Holberton@simple_shell:";
	printf("\033[1;31m");
	printf("%s", hostname);
	printf("\033[0m");
	printf("\033[0;32m");
	printf("%s", _usrpath);
	printf("\033[0m");
	printf("$ ");
}