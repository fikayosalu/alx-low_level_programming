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
	unsigned int i;
	unsigned int j;
	unsigned int k;
	char *dest;

	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			j = i;
			while (s[j] != '\0')
			{
				dest[k] = s[j];
				j++;
				k++;
			}
			return (dest);
		}
		i++;
	}
	return (NULL);
}
