#include"main.h"

/**
 * _calloc- allocates memory for an array and
 * initializes the array to zero
 * @nmemb: The number of elements in the array
 * @size: The size of each elements of the array
 *
 * Return: if nmemb or size is 0 return NULL, if malloc
 * fails, return NULL otherwise return pointer to the memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, mem_size;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem_size = nmemb * size;
	ptr = malloc(mem_size);

	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (i < mem_size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);

}
