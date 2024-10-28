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
	int i, j, n;

	i = 0;
	n = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				n++;
			j++;
		}
		if (n <= i)
			break;
		i++;
	}

	return (n);
}
