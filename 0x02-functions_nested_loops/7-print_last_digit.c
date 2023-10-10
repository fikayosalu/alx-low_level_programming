#include "main.h"
/**
 * print_last_digit- Function that prints the last digits of a number
 * @c: Parameter of the function
 * Return: The last digit of the integer
 */
int print_last_digit(int c)
{
	int d = c % 10;

	if (d < 0)
		d = -d;
	_putchar(d + '0');
	return (d);
}
