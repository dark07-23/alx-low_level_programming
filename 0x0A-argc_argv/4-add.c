#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - string there are digit
	 	 	 	 	 * Return: Always 0 (Success)
 *	 	 	 	 */
int check_num(char *str)
{
	unsigned int count = 0;
	while (count < strlen(str)) 

	if (!isdigit(str[count])) 
	{
		return (0);
		count++;
	}
	return (1);
}


int main(int argc, char *argv[])
{
		int count, int s_to_i;
		int sum = 0;
		count = 1;
		
	while (count < argc) 
	{
	if (check_num(argv[count]))
		{
			s_to_i = atoi(argv[count]);
			sum += s_to_i;
		}
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


