#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
 * main - Performs simple arithmetic operations.
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to the arguments.
 * Return: 0 if successful, error codes otherwise.
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
						{
									printf("Error\n");
											return 98;
												}

					num1 = atoi(argv[1]);
						op = argv[2];
							num2 = atoi(argv[3]);

								if (get_op_func(op) == NULL || op[1] != '\0')
										{
													printf("Error\n");
															return 99;
																}

									if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
											{
														printf("Error\n");
																return 100;
																	}

										int result = get_op_func(op)(num1, num2);
											printf("%d\n", result);

												return 0;
}

