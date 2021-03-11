#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h> 

void ft_list_push_back(t_list **begin_list, void *data);

int main ()
{
	struct s_list *head =malloc(sizeof(t_list));
	struct s_list *current;
	int i;

	head->data = (void *)0;
	head->next = NULL;
	printf("head:	%d\n", (int)(head->data));
	i = 1;
	ft_list_push_back(&head, "hell");
	ft_list_push_back(&head, "hel");
	ft_list_push_back(&head, "he");
	ft_list_push_back(&head, "h");
	current = head->next;
	while (current != NULL)
	{
		printf("element %d:	%s\n", i, (current->data));
		current = current->next;
		i++;
	}
}