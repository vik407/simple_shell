#include "holberton.h"
/**
 * main - A simple UNIX command interpreter.
 * @argc: Number of Arguments
 * @argv: Arguments
 * @envp: Enviroment parameters
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
	return EXIT_SUCCESS;
}
/**
 * hi - A message to welcome user in interactive mode
 * Return: welcome screen
 */
void hi()
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
void prompt()
{
	char *_usrpath = getcwd(NULL, 1024);
	char hostname[] = "Holberton@simple_shell:";
	_puts("\033[1;31m", 0);
	_puts(hostname, 0);
	_puts("\033[0m", 0);
	_puts("\033[0;32m", 0);
	_puts(_usrpath, 0);
	_puts("\033[0m", 0);
	_puts("$ ", 0);
}