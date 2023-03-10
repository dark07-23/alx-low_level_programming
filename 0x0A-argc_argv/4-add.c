#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - a program that adds positive numbers.
 * If no number is passed to the program, print 0
 * If one of the number contains symbols that are not digits, print Error
 * @argc: number of arguments
 * @argv: arguments
 * Return: always (0) success
 */
int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
int main(int argc, char *argv[])

{

/*Declaring variables*/
int count;
int str_to_int;
int sum = 0;

count = 1;
while (count < argc) /*Goes through the whole array*/
{
if (check_num(argv[count]))

{
str_to_int = atoi(argv[count]); /*ATOI --> convert string to int*/
sum += str_to_int;
}

/*Condition if one of the number contains symbols that are not digits*/
else
{
printf("Error\n");
return (1);
}

count++;
}

printf("%d\n", sum); /*print sum*/

return (0);
}
