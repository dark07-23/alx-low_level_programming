#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers, starting with
 * 1and 2separated by a coma followed by a space.
 * Return: Always 0(success)
 */
int main(void)
{
	unsigned long i, j, k, j1, j2, k1, k2;

	j = 1;
	k = 2;

	printf("%lu", j);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", k);
		k = k + j;
		j = k - j;
	}

	j1 = j / 10000000000;
	j2 = j % 10000000000;
	k1 = k / 10000000000;
	k2 = k % 10000000000;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", k1 + (k2 / 10000000000));
		printf("%lu", k2 % 10000000000);
		k1 = k1 + j1;
		j1 = k1 - j1;
		k2 = k2 + j1;
		j2 = k2 - j2;
	}

	printf("\n");

	return (0);
}
