#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints its name, followed by a new line.
 * do not remove the path without the name.
 * @argc: counts arguments
 * @argv: arguments
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	return(0);
}
