#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h> 

void ft_list_push_back(t_list **begin_list, void *data);
t_list *ft_list_push_strs(int size, char **strs);

int main ()
{
	struct s_list *current;
	int i = 0;

	char* tab[] = {"hello", "world", "!"};
	current = (ft_list_push_strs(3, tab));
	while (i < 5)
	{
		printf("%s\n", (current->data));
		current = current->next;
		i++;
	}
}