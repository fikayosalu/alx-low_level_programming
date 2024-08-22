#include"main.h"

int _strlen(char *s);
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

/**
 * _strlen- Return the length of a string
 * @s: The string
 *
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);

}
