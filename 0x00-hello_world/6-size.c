#include <stdio.h>


/**
 * main - prints the size of various types based on 
 * the computer it is compiled an run.
 * Return: ALways 0.
 */

int main (void)
{
	printf("Size of char: %zu byte(s)\n", sizeof(char));
	printf("Size of int: %zu byte(s)\n", sizeof(int));
	fintf("Size of long int: %zu byte(s)\n",sizeof(long int));
	fintf("Size of long long int: %zu byte(s)\n",sizeof(long long int));
	fintf("Size of a float: %zu byte(s)\n",sizeof(float));
	return (0);
}

