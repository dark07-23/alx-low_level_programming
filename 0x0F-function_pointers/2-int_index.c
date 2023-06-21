#include "function_pointers.h"

/**
 * int_index - Searches for an element in an array that satisfies a condition.
 * @array: The array to search in.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the function that defines the condition to be satisfied.
 * This function checks if 'array', 'size', and 'cmp' are valid. If they are, it
 * iterates over each element of the array and calls the function pointed to by 'cmp'
 * on each element. If the condition is satisfied, the function returns the index of
 * the element. If no element satisfies the condition, it returns -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL || size <= 0 || cmp == NULL)
		return -1;

	for (int i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return i;
	 	}	

	return -1;
}

