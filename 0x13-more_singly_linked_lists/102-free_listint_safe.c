#include "lists.h"


size_t free_listint_safe(listint_t **h)
{
	    size_t len = 0;
	        listint_t *current, *temp;

		    if (!h || !*h)
			            return 0;

		        current = *h;

			    while (current)
				        {
						        if (current->next >= current)
								        {
										            temp = current;
											                current = current->next;
													            free(temp);
														                len++;
																            break;
																	            }
							        else
									        {
											            temp = current;
												                current = current->next;
														            free(temp);
															                len++;
																	        }
								    }

			        *h = NULL;

				    return len;
}

