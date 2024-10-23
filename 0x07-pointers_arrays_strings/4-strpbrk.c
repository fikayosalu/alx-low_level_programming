#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @accept: The string containing the charcters
 * you want to check against
 * @s: The string you want to examine
 *
 * Return: Returns a pointer to the byte in s that
 * matches one of the bytes in accept or return Null
 * if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
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
