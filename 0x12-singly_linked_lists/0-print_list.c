#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
	    size_t s = 0;

	        for (; h; h = h->next, s++)
			    {
				            if (!h->str)
						                printf("[0] (nil)\n");
					            else
							                printf("[%u] %s\n", h->len, h->str);
						        }

		    return s;
}

