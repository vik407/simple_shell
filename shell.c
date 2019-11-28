#include "holberton.h"
/**
 * main - A simple UNIX command interpreter.
 * @argc: Number of Arguments
 * @argv: Arguments
 * @envp: Enviroment parameters
 * Return: A prompt to execute commands
 */
int main(int argc, char **argv, char **envp)
{
	int status = 1, is_interactive;
	char *readline = NULL, **tokens;

	is_interactive = isatty(STDIN_FILENO);
	/*if (is_interactive) hi();*/
	do {
		prompt();
		readline = read_line();
		if (readline[0] == '\0')
		{
			free(readline);
			continue;
		}
		tokens = (readline != NULL) ? tokenizer(readline) : NULL;
		if (tokens != NULL)
			run_execve(tokens, envp);
		free(readline);
		free(tokens);
	} while (status);

	(void) argc;
	(void) argv;
	(void) is_interactive;
	return (EXIT_SUCCESS);
}
/**
 * hi - A message to welcome user in interactive mode
 * Return: welcome screen
 */
void hi(void)
{
	_puts("\033[1;33m", 0);
	_puts("============================================", 1);
	_puts("========== INTERACTIVE MODE ================", 1);
	_puts("============================================", 1);
	_puts("\033[0m", 0);
}
/**
 * prompt - The shell prompt used and showed to the user
 * Return: text
 */
void prompt(void)
{
	_puts("$ ", 0);
}
