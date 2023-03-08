#include "main.h"

/**
 * function that returns the factorial of a given number
 * @n: number to find factorial of
 *  Return: if n < 0 is error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
	result *= factorial(n - 1);
	return (result);
}
