#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: the character to be checked.
 *
 * Return: 1 if uppercase otherwise 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		_putchar(1);
	else
		_putchar(0);
}
