#include <unistd.h>

/**
 * _puutchar - writes the character c to stdout
 * @c: the character to print
 * Return 1 if true and 0 if false
 * on error, -1 return.
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
