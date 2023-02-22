#include "main.h"

/**
 * print_last_digit - Write a function that prints the last digit of a number.
 * @n: argument to be check
 *
 * Return: absolute value of n
 */
int print_last_digit(int n)
{
	int Val;

	Val = n % 10;

	if (Val < 0)
	{
		Val = Val * -1;
	}
	_putchar(Val + '0');
	return (Val);
}
