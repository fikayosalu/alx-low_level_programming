#include"main.h"

/**
 * puts_half- Prints half of a string
 * @str: The string
 *
 * Return: No return value
 */

void puts_half(char *str)
{
	int len = 0;
	int half;
	int odd;

	while (str[len] != '\0')
	{
		len++;
	}

	odd = ((len - 1) / 2) + 1;

	if (len % 2 == 0)
	{
		half = len / 2;

		while (str[half] != '\0')
		{
			_putchar(str[half]);
			half++;
		}
	}
	else
	{
		while (str[odd] != '\0')
		{
			_putchar(str[odd]);
			odd++;
		}
	}
	_putchar('\n');
}
