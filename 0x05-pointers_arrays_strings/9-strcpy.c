#include"main.h"
/**
 * _strcpy- copies a string
 * @src: The string to be copied
 * @dest: The new string to be returned
 *
 * Return: No return value
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i++] = '\0';
	return (dest);
}
