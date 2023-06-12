#include "main.h"
#include <stdlib.h>
		
/**
 * alloc_grid - nested loop to make grid
 * 		 		
 * Return: pointer to 2 dim. array
 * 		 		 		 		 		
 */
		
int **alloc_grid(int width, int height)
{
			
		int **h;
			
			int m, n;
					

					
				if (width <= 0 || height <= 0)
							
							return (NULL);
						

						
					h = malloc(sizeof(int *) * height);
							

							
						if (h == NULL)
									
									return (NULL);
								

								
							for (m = 0; m < height; m++)
										
									{
												
											h[m] = malloc(sizeof(int) * width);
														

														
													if (h[m] == NULL)
																	
																	{
																				
					for (; m >= 0; m--)
																								
											free(h[m]);
																							

																							
								free(h);
																										
																											return (NULL);
																													
																													}
																
															}
									

									
								for (m = 0; m < height; m++)
											
										{
													
													for (n = 0; n < width; n++)
																
																	h[m][n] = 0;
															
														}
										

										
									return (h);
											
}

