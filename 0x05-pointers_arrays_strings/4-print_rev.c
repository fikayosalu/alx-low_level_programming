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
	int n;

	while (s[len] != '\0')
	{
		len++;
	}

	n = len - 1;
	while (n >= 0)
	{
		_putchar(s[n]);
		n--;
	}
	_putchar('\n');
}
