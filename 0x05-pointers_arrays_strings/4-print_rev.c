#include"main.h"
/**
 * print_rev- print the reverse of a string
 * @s: The string to be reversed
 *
 * Return: There is no return value
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
