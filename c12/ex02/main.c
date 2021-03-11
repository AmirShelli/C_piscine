#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h> 

void ft_list_push_front(t_list **begin_list, void *data);
int ft_list_size(t_list *begin_list);

int main ()
{
	struct s_list *head =malloc(sizeof(t_list));
	struct s_list *current;
	int i = 1;

	head->data = "!";
	head->next = NULL;
	printf("head:	%s\n", (head->data));
	

	ft_list_push_front(&head,"world");
	ft_list_push_front(&head, "hello ");
	ft_list_push_front(&head, "begin");
	printf("head:	%s\n", (head->data));
	current = head;
	while (current->next != NULL)
	{
		current = current->next;
		printf("element %d:	%s\n", i, (current->data));
		i++;
	}
	printf("size:	%d\n", ft_list_size(head));
}