#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints the last digit of a random number
 *
 * Return: Return 0 (success)
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (last == 0)
	{
		printf("last digit of %d is %dand is 0\n", n, last);
	}
	else
	{
		if (last > 5)
		{
			printf("last digit of %d is %d and is greater than 5\n", n, last);
		}
		else if (last < 6)
		{
			printf("last digit of %d is %d and is less than 6and not 0\n", n, last);
		}
	}
	return (0);
}
