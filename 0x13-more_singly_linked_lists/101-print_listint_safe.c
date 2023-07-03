#include "lists.h"
#include <stdio.h>


size_t looped_listint_len(const listint_t *head)
{
	    const listint_t *tortoise, *hare;
	        size_t nodes = 0;

		    if (head == NULL || head->next == NULL)
			            return 0;

		        tortoise = head;
			    hare = head;

			        while (hare && hare->next)
					    {
						            tortoise = tortoise->next;
							            hare = hare->next->next;

								            if (tortoise == hare)
										            {
												                nodes = 1;
														            hare = hare->next;

															                while (tortoise != hare)
																		            {
																				                    nodes++;
																						                    hare = hare->next;
																								                }

																	            return nodes;
																		            }
									        }

				    return 0;
}


size_t print_listint_safe(const listint_t *head)
{
	    size_t nodes = 0;
	        const listint_t *current = head;
		    int loop_detected = 0;

		        if (head == NULL)
				        return 0;

			    nodes = looped_listint_len(head);

			        while (current && (!loop_detected || nodes > 0))
					    {
						            printf("[%p] %d\n", (void *)current, current->n);

							            current = current->next;
								            nodes--;

									            if (current == head && loop_detected == 0)
											            {
													                printf("-> [%p] %d\n", (void *)current, current->n);
															            loop_detected = 1;
																            }
										        }

				    return nodes;
}

