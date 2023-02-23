#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: the character to be checked.
 *
 * Return: 1 if uppercase otherwise 0
 */

int _isupper(int c)

{
char uppercase = 'A';
int isuppr = 0;
for (; uppercase <= 'Z'; uppercase++)
{
if (c == uppercase)
{
isupper = 1;
break;
}
}
return (isupper);
}
