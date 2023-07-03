#include <unistd.h>
#include "lists.h"


size_t print_listint(const listint_t *h)
{
	    size_t num = 0;  

	        while (h)
			    {
				            int value = h->n;
					            char buffer[12]; 
						            int length = 0;

							                   while (value != 0)
								                    {
								                                buffer[length++] = '0' + (value % 10);
								                                             value /= 10;
								                                                    }
								    

								                                                                    for (int i = length - 1; i >= 0; i--)
								                                                                                write(STDOUT_FILENO, &buffer[i], 1);
								                                                                                        

								                                                                                                        h = h->next;
							                                                                                                        num++;  // Increment the node count
							                                                                                                                 }
							 
								                                                                                                                        return num;  // Return the total number of nodes
								                                                                                                                        }
								   
