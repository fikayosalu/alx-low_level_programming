#include "main.h"
/**
 * _abs- Function that computes the absolute value of an integer
 * @c: The parameter of the function
 * Return: Always return a positive argument
 */
int _abs(int c)
{
	if (c < 0)
	{
		return (-c);
	}
	else
	{
		return (c);
	}
}
