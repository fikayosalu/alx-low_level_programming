#include"main.h"
#include<stdio.h>
/**
 * print_array- Prints 'n' number of elements
 * @a: The array of integers
 * @n: The number aof element to be printed
 *
 * Return: No return value
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
			printf("%d", a[i]);
		i++;
	}
	printf("\n");
}
