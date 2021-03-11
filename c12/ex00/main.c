#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h> 

t_list	*ft_create_elem(void *data);

int main ()
{
	struct s_list *head;
	struct s_list *current;
	int i = 0;

	head = ft_create_elem(0); 
	current = head;
	while (current->next != NULL)
	{
		printf("element %d:	%d", i, (int)(head->data));
		current = current->next;
		i++;
	}
}