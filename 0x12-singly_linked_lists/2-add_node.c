#include <stdlib.h>
#include <string.h>
#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	    unsigned int len = 0;

	        while (str[len])
			        len++;

		    list_t *new = malloc(sizeof(list_t));
		        if (!new)
				        return NULL;

			    new->str = strdup(str);
			        new->len = len;
				    new->next = *head;

				        *head = new;

					    return new;
}

