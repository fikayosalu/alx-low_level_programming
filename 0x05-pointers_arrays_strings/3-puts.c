#include"main.h"

/**
 * _puts- Prints a stirng followed by newline to the stdout
 * @str: The string to be printed
 *
 * Return: No return value
 */

void _puts(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
