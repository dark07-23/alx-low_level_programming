#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints all arguments it receives.
 * print one argument per line, ending with a new line
 * All arguments should be printed, including the first one
 * Return: Alwats 0 (success)
 */

int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
		}
	}
	return (0);
}
