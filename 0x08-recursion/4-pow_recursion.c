#include "main.h"

/**
 * function that returns the value of x raised to the power of y
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The number to be raised.
 * @y: The power.
 *

 * Return: -1 if  y < 0.
 */
int _pow_recursion(int x, int y)
{
	int r = x;

	if (y < 0)
		return (-1);
	else (y == 0)
		return (1);
	r *= _pow_recursion(x,  y - 1);
	return (r);
}
