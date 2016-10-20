#include "../../include/list.h"

void add_elem(void* elem, struct s_node** head)
{
	struct s_node* node = NULL;

	if (elem == NULL)
		return;

	else
	{
 		node = new_node(elem, *head, NULL);
		*head->prev = node;
	}
}
