#include"main.h"

/**
 * _strlen - function that returns the length of a string
 *
 * @s: Parameter of the function
 *
 * Return: The length of the string
 */

int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
