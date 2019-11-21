#include "../holberton.h"
/**
 * main - Prints all the arguments without strok
 * @argc: take an argument.
 * @argv: take an argument.
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i = 0;
	(void) argc;

	while (*argv != NULL)
	{
		printf("argv[%d] = %s \n", i, *argv);
		argv++;
		i++;
	}

	return (0);
}
