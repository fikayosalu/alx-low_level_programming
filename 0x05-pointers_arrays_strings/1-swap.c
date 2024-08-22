#include"main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: The first integer
 * @b: The second integer
 *
 * Return: No return value
 */

void swap_int(int *a, int *b)
{
	int temp = *b;
	*b = *a;
	*a = temp;
}
