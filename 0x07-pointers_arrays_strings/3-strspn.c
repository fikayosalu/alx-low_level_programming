#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @accept: The string containing the charcters
 * you want to check against
 * @s: The string you want to examine
 *
 * Return: Returns the count of matching characters
 */

unsigned int _strspn(char *s, char *accept)
{
	int 0;
}

/**
 * _strlen - Return the length of a string
 * @s: The string
 *
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
