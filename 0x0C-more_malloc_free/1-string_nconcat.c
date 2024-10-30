#include"main.h"

unsigned int len(char *str);
/**
 * string_nconcat- Concatenates string 1 and n bytes
 * of string 2
 * @s1: The string 1
 * @s2: The string 2
 * @n: The number of bytes of s2 to concatenate
 *
 * Return: If malloc fails return NULL, otherwise return
 * pointer to the newly allocated space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int size1;
	unsigned int size2;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size1 = len(s1);
	if (n < len(s2))
		size2 = n;
	if (n >= len(s2))
		size2 = len(s2);

	ptr = malloc(sizeof(char) * (size1 + size2 + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < size2)
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i++] = '\0';
	return (ptr);
}

/**
 * len- Returns the length of a string
 * @str: The string
 *
 * Return: The length of the string
 */

unsigned int len(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
