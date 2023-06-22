#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, separated by a given string, followed by a new line.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	    va_list args;
	        unsigned int i;

		    va_start(args, n);

		        for (i = 0; i < n; i++)
				    {
					            printf("%d", va_arg(args, int));

						            if (separator != NULL && i != n - 1)
								                printf("%s", separator);
							        }

			    printf("\n");

			        va_end(args);
}

