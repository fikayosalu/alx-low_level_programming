#include "main.h"
/**
 * _pow_recursion-A funtion that return the value of x raised to the power of y
 * @x: First parameter of the funtion
 * @y: Second parameter of the function
 * Return: Return x raised to power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, (y - 1)));
	return (0);
}
