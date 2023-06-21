#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print name using a function pointer
 * @name: string to print
 * @f: function pointer
 * This function takes a string 'name' and a function pointer 'f'. It checks if
 * name' and 'f' are valid and then invokes the function pointed to by 'f',
 * passing 'name' as an argument.
 */
void print_name(char *name, void (*f)(char *))
{
	    if (name != NULL && f != NULL)
		            f(name);
}

