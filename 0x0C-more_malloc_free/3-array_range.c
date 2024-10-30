#include"main.h"

/**
 * array_range- Creates an array of integers from min to max
 * @min: The start of the array
 * @max: The last number of the array
 *
 * Return: if min > max return NULL, if malloc fails return NULL
 * otherwise return the pinter to the newly created array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;
	unsigned int size;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	ptr = malloc(size * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);

}
