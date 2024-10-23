#include "main.h"

/**
 * _memcpy - Copies a memory area
 * @src: The pointer to the memory area being copied
 * @dest: The destination of the copied bytes
 * @n: The number of bytes copied
 *
 * Return: Return the pointer to the memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
