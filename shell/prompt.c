#include "../holberton.h"

int lsh_loop(char *mode)
{
	if(mode == 'interactive')
		loop_interactive();
	else
	{
		loop_non_interactive();
	}
}

/*
 * main - Write a program that prints "$ ", wait for the user to enter a
 * command, prints it on the next line.
 * Return: 0 on success
 */
int main(void)
{
	size_t bufsize = 0;
	char *buff = NULL;
	int status = 1;

	while (status == 1)
	{
		printf("$ ");
		getline(&buff, &bufsize, stdin);
		printf("%s", buff);
	}
	free(buff);
	return (0);
}