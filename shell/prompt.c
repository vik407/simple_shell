#include "../holberton.h"

/*
 * main - Write a program that prints "$ ", wait for the user to enter a
 * command, prints it on the next line.
 * Return: 0 on success
 */
int main(void)
{
	size_t bufsize = BUFFER_SIZE;
	size_t i = 0;
	/* Contar de mi buff la cantidad de separadores que tengo para hacer este dinámico */
	char *buff = NULL;
	int getline_status, k, status = 1;
	char *token;
	/* Hacer el malloc luego del cuento de separadores */
	char **tokens = malloc(bufsize * sizeof(char*));
	const char s[2] = " ";
	if (!tokens) {
		fprintf(stderr, "Error\n");
		exit(EXIT_FAILURE);
	}

	while (status == 1)
	{
		printf("$ ");
		getline_status = getline(&buff, &bufsize, stdin);
		buff[getline_status - 1] = '\0';
		/* Crear la asignación de memoria
		* char **tokens = (char**) malloc(bufsize * sizeof(char *));
		*/
		printf("Buff: %s\n", buff);
		token = strtok(buff, s);
		if (getline_status > 1)
		{
			i = 0;
			while (token != NULL)
			{
				tokens[i] = token;
				i++;
				/* If the number of tokens overpases the buffer realloc */
				if (i >= bufsize)
				{
					bufsize += BUFFER_SIZE;
					tokens = realloc(tokens, bufsize * sizeof(char *));
					if (!tokens) {
						fprintf(stderr, "Error\n");
						exit(EXIT_FAILURE);
					}
				}
				printf( "Token: %s\n", token);
				token = strtok(NULL, s);
			}
			for (k = 0; tokens[k] != NULL; k++)
			{
				printf( "Tokens[%d]: %s\n", k, tokens[k]);
			}
			/* Free malloc tokens */
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
	free(token);
	free(tokens);
	return (0);
}