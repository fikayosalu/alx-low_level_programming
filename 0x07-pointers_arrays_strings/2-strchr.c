#include "main.h"

/**
 * _strchr - locates a character in a string
 * @c: The character to be located
 * @s: The string where the character
 * is to be located
 *
 * Return: Return a pointer to the first
 * occurence of the character or NULL if not found
 */

char *_strchr(char *s, char c)
{
	unsigned int i, j;
	char *dest;

	i = 0;
	j = _strlen(s) + 1;
	while (i <= j)
	{
		if (s[i] == c)
		{
			dest = &s[i];
			return (dest);
		}
		i++;
	}
	return (NULL);
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
