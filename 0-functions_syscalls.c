#include "holberton.h"
/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 *
 * @str: string
 *
 * Return: NULL if str = NULL. On success, the _strdup function returns a
 * pointer to the duplicated string. It returns NULL if insufficient memory was
 * available
 */
char *_strdup(char *str)
{
	char *res;
	unsigned int i, len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	len++;
	res = malloc(len * sizeof(char));
	if (res == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		res[i] = str[i];

	return (res);
}
/**
 * _strncmp - function that compares two strings.
 *
 * @s1: String one
 * @s2: String two
 * @n: the length of the comparation
 * Return: a comparation
 */
int _strncmp(char *s1, char *s2, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
/**
 * _puts - prints a string, optional followed by a new line, to stdout
 *
 * @str: The String
 * @n: 1 to end with new line or not
 * Return: string
 */
void _puts(char *str, int n)
{
	int length = 0;

	while (*(str + length) != '\0')
	{
		_putchar(*(str + length));
		length++;
	}
	if (n == 1)
		_putchar('\n');
}
