#include "../holberton.h"

/*
 * main - Write a program that prints "$ ", wait for the user to enter a
 * command, prints it on the next line.
 * Return: 0 on success
 */
int main(void)
{
	size_t bufsize = 1024;
	char *buff = NULL;
	int getline_status;
	char *token;
	const char s[2] = " ";
	int status = 1;

	while (status == 1)
	{
		printf("$ ");
		getline_status = getline(&buff, &bufsize, stdin);
		buff[getline_status - 1] = '\0';
		printf("%s\n", buff);
		token = strtok(buff, s);
		if (getline_status > 1)
		{
			while (token != NULL)
			{
				printf( "%s\n", token );
				token = strtok(NULL, s);
			}
		}
		else if (getline_status == -1)
		{
			/* TODO Get pid */
			printf("%s", "Exiting... and cleaning\n");
			status = -1;
		} else
		{
			printf("%s", "No line sended\n");
		}
	}
	free(buff);
	return (0);
}