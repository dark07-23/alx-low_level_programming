#include "main.h"

/**
 * main - function that prints a string in reverse.
 * @s: string to be printed
 * Auth: Gilbert
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
