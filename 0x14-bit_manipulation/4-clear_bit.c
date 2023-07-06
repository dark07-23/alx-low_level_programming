#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n: pointer to the number to change
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
		if (index >= sizeof(unsigned long int) * 8) // Check if index is out of range
					return -1;

			unsigned long int mask = ~(1UL << index); // Create a mask with the bit at the index cleared

				*n &= mask; // Clear the bit at the index using the bitwise AND assignment operator

					return 1; // Return 1 for success
}

