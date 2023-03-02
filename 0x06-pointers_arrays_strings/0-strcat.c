#include "main.h"

/**
 *  a function that concatenates two strings
 *  This function appends the src string to the @dest
 * @dest: A pointer to the string
 * @src: The source string to be appended to @dest
 *  Returns - A pointer to the resulting string dest
 */

char *_strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
