#include <unistd.h>

/**
 * main - writes the character to stand out
 * return:on suceaa 1
 * on error, -1 is returned,and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
