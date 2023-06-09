#include <stdio.h>

#include "main.h"



/**
 *_atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 * 		 		 		 		 		 */

int _atoi(char *s)

{

		int i, d, n, len, f, dig;



			i = 0, d = 0, n = 0, len = 0, f = 0, dig = 0;


									while (s[len] != '\0')

												len++;



										while (i < len && f == 0)

												{

															if (s[i] == '-')

																			++d;



																	if (s[i] >= '0' && s[i] <= '9')

																				{

dig = s[i] - '0';
																								if (d % 2)

dig = -dig;
		n = n * 10 + dig;

																																	f = 1;

																																				if (s[i + 1] < '0' || s[i + 1] > '9')

																																									break;

																																							f = 0;

																																									}

																			i++;

																				}



											if (f == 0)

														return (0);



												return (n);

}


int main(int argc, char *argv[])

{

		int res, num1, num2;



			if (argc < 3 || argc > 3)

					{

								printf("Error\n");

										return (1);

											}



				num1 = _atoi(argv[1]);

					num2 = _atoi(argv[2]);

						res = num1 * num2;



							printf("%d\n", res);



								return (0);

}


								return (0);

}

