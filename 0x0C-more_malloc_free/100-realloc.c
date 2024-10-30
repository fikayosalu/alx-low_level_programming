#include"main.h"

/**
 * _realloc- reallocates a memory block using malloc and free
 * @ptr: The pointer to the memory previously
 * allocated with malloc
 * @old_size: The size in bytes of the allocated space for ptr
 * @new_size: The new size, in bytes of the new memory block
 *
 * Return: if new_size == old_size return ptr, if new_size == 0
 * and ptr != NULL return NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *arr;
	unsigned int size;
	char *byte_ptr;
	char *byte_arr;

	size = (old_size > new_size) ? new_size : old_size;
	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
		return (NULL);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}

	arr = malloc(new_size);
	byte_ptr = (char *)ptr;
	byte_arr = (char *)arr;

	i = 0;
	while (i < size)
	{
		byte_arr[i] = byte_ptr[i];
		i++;
	}
	free(ptr);
	ptr = arr;
	return (ptr);

}
