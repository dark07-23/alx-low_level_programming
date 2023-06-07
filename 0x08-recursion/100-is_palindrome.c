#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
		if (*s == 0)
					return (1);
		return (check_pal(s, 0, _strlen_recursion(s)));
}

int _strlen_recursion(char *s)
{
		if (*s == '\0')
					return (0);
			return (1 + _strlen_recursion(s + 1));
}
int check_pal(char *s, int i, int len)
{
		if (*(s + i) != *(s + len - 1))
					return (0);
			if (i >= len)
						return (1);
				return (check_pal(s, i + 1, len - 1));
}

