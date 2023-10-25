#include "main.h"
/**
 * _print_rev_recursion- Function that reverses strins
 * @s: Parameter of the function
 *
 * Return: Noreturn value
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s  + 1);
		_putchar(*s);
	}
}
