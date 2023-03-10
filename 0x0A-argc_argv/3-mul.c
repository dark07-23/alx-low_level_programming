#include "main.h"
#include <stdio.h>

/**
 * main - program that multiplies two numbers.
 * @agrc: number of arguments
 * @argv: arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 2)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	printf("Error\n");
	return (1);
}
