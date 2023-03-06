#include "main.h"

/**
 * main - function that copies memory area
 * _memcpy - a function that copies memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: number of bytes
 * copies n bytes from memory area src to memory area dest
 * Returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = n;

	for (; j > 0; j++)
	{
		dest[j] = scr[j];
		j++;
	}
	return (dest);
}
