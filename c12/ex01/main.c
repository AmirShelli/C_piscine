#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h> 

void ft_list_push_front(t_list **begin_list, void *data);

int main ()
{
	struct s_list *head =malloc(sizeof(t_list));
	struct s_list *current;
	int i = 1;

	head->data = (void *)1;
	head->next = NULL;
	printf("head:	%d\n", (int)(head->data));
	

	ft_list_push_front(&head, (void *)"begin");
	printf("head:	%s\n", (head->data));
	current = head;
	while (current->next != NULL)
	{
		current = current->next;
		printf("element %d:	%d\n", i, (int)(current->data));
		i++;
	}
}