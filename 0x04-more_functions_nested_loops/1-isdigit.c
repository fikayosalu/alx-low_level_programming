#include "main.h"
/**
 * _isdigit- Function that checks for a digit (0 through 9)
 * @c:The parameter
 * Return: 1 when successful and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
