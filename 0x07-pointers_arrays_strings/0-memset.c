#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: The pointer to the memory
 * @b: The value that the memory is filled with
 * @n: The number of bytes filled
 *
 * Return: Return the pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
