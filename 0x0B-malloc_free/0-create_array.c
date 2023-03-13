#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that creates an array of chars,
 * and initializes it with a specific char
 * Returns: NULL if size = 0
 * Returns a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
if (size == 0) {
return NULL;
}
char *array = malloc(size * sizeof(char));
if (array == NULL) {
return NULL;
}
for (int i = 0; i < size; i++) {
array[i] = c;
}
return array;
}
