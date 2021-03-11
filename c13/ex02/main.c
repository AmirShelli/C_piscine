#include "ft_btree.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	btree_apply_infix(t_btree *root, void (*applyf)(char *)); //change void back!!
t_btree		*btree_create_node(void *item)
{
	struct s_btree *tree;

	tree = malloc(sizeof(t_btree));
	tree->item = item;
	tree->left = NULL;
	tree->right = NULL;
	return tree;
}

int main()
{
	struct s_btree *tree = btree_create_node("hello ");
	tree->left = btree_create_node("world ");
	tree->right =  btree_create_node("! ");
	
	btree_apply_infix(tree, &ft_putstr);
}