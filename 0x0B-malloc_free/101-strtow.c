#include <stdlib.h>
#include "main.h"


/**
 * count_word - helper function to count the number of words in a string
 * Return: number of words
 */

int count_word(char *s)
{

	int gas, m, n;
	gas = 0;
	n = 0;

	for (m = 0; s[m] != '\0'; m++)
	{
		if (s[m] == ' ')
			gas = 0;

		else if (gas == 0)
		{
			gas = 1;
				n++;

		}
	return (n);

}

char **strtow(char *str)
{

	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);

	if (words == 0)
		return (NULL);
	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
																{
	if (c)

	{
																		end = i;
																		tmp = (char *) malloc(sizeof(char) * (c + 1));

																	if (tmp == NULL)
		return (NULL);
	while (start < end)
		*tmp++ = str[start++];
			*tmp = '\0';
																	matrix[k] = tmp - c;

		k++;

		c = 0;
	}
	}

	else if (c++ == 0)

		start = i;
	}
		matrix[k] = NULL;
	return (matrix);

}

