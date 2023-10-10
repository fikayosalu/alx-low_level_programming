#include "main.h"
/**
 * _islower- Function that checks for lowercase alphabets
 * @c: Parameter to be checked
 * Return: 1 if it is lowercase and 0 if it is not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
