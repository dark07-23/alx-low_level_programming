#include "main.h"

/**
 * Print_alphabet_x10 - make alphabet x10 times
 * Return: void
 */
void Print_alphabet_x10(void)
{
	char ch;
	int i = 0;

	i = 0;
	
	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
