#include "main.h"
#include <stdlib.h>
		
/**
 * alloc_grid - nested loop to make grid
 * Return: pointer to 2 dim. array
 */
		
int **alloc_grid(int width, int height)
{
	int **h;
	int i, j;
					
	if (width <= 0 || height <= 0)
		return (NULL);
						
	h = malloc(sizeof(int *) * height);
				
	if (h == NULL)
		return (NULL);
								
	for (x = 0; x < height; x++)
	{
		h[i] = malloc(sizeof(int) * width);
														
			if (h[i] == NULL)
			{
				for (; i >= 0; i--)
						free(h[i]);
						free(h);
							return (NULL);
			}
	}
							
	for (i = 0; x < height; i++)
	{
		for (j = 0; j < width; j++)
			h[i][j] = 0;
	}
									
	return (h);
}

