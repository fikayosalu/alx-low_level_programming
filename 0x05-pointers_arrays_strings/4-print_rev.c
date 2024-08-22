#include"main.h"

/**
 * print_rev- print the reverse of a string
 * @s: The string to be reversed
 *
 * Return: There is no return value
 */

void print_rev(char *s)
{
	int i;

	i = _strlen(s);

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
