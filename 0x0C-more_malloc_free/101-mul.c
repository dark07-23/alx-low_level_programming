#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * is_digit - checks if a string contains a non-digit char
 * Return: 0 if a non-digit is found, 1 otherwise
 *		 		 		
 * 		 		 		 		 		 */
		
int is_digit(char *s)
{
			
	int i = 0;
					
	while (s[i])
		{
			if (s[i] < '0' || s[i] > '9')
				return (0);
					i++;
		}
					
		return (1);
	
}
		
		
int main(int argc, char *argv[])
		
{
			
	char *s1, *s2;
			
	int len1, len2, len, i, car, dig1, dig2, *res, a = 0;
					

	s1 = argv[1], s2 = argv[2];
				
		if (argc != 3 || !is_dig(s1) || !is_dig(s2))
								
				errors();
							
			len1 = _strlen(s1);
			len2 = _strlen(s2);
			len = len1 + len2 + 1;
										
			res = malloc(sizeof(int) * len);
											
			if (!res)
				return (1);
			for (i = 0; i <= len1 + len2; i++)
				result[i] = 0;
			for (len1 = len1 - 1; len1 >= 0; len1--)
				{
					dig1 = s1[len1] - '0';
						car = 0;
																					
			for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
			{
				dig2 = s2[len2] - '0';
					car += res[len1 + len2 + 1] + (dig1 * dig2);
																														
				res[len1 + len2 + 1] = car % 10;
										
				car /= 10;
					}
																							
				if (car > 0)
																										
					res[len1 + len2 + 1] += car;
																	
								}
									
					for (i = 0; i < len - 1; i++)
															
															{
																		
			if (res[i])
																					
																						a = 1;
																				
																				if (a)
																							
		_putchar(res[i] + '0');
																						
																					}
															
														if (!a)
																	
																	_putchar('0');
																
															_putchar('\n');
																	
	free(res);
																		
																	return (0);
																			
}

