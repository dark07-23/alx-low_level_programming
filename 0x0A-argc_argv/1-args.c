#include "main.h"
#include <stdio.h>

/**
 * program that prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 (always)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%i\n", argc - 1);

	return (0);
}
