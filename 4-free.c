#include "holberton.h"
/**
 * free_double - function that iterates liberating a double pointer
 * @func: name of the function to be released
 * Return: peace of mind
 */
void free_double(char **func)
{
	unsigned int i;

	if (func == NULL)
		return;
	for (i = 0; func != NULL; ++i)
	{
		free(func[i]);
	}

	if (func[i] == NULL)
		free(func[i]);

	free(func);
}
