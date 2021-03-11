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

void 	btree_insert_data(t_btree **root, char *item, int (*cmpf)(char *, char *));//change void back!!
t_btree		*btree_create_node(void *item)
{
	struct s_btree *tree;

	tree = malloc(sizeof(t_btree));
	tree->item = item;
	tree->left = NULL;
	tree->right = NULL;
	return tree;
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] == s2[i]) && (*s1) && (*s2))
	{
		s1++;
		s2++;
		i++;
	}
	return (*s1 - *s2);
}


void	btree_apply_infix(t_btree *root, void (*applyf)(char *))
{
	if (!root)
		return ;
	else
	{
		btree_apply_infix(root->left, applyf);
		applyf(root->item);
		btree_apply_infix(root->right, applyf);
	}
}

void	btree_insert_data(t_btree **root,
	void *item, int (*cmpf)(void *, void *))
{
	if ((*root))
	{
		if (cmpf(item, (*root)->item) >= 0)
			btree_insert_data(&((*root)->right), item, cmpf);
		else
			btree_insert_data(&((*root)->left), item, cmpf);
	}
	else
		(*root) = btree_create_node(item);
}

int main()
{
	struct s_btree *tree = NULL;
	btree_insert_data(&tree, " A ", &ft_strcmp);
	btree_insert_data(&tree, " C ", &ft_strcmp);
	btree_insert_data(&tree, " B ", &ft_strcmp);
	btree_insert_data(&tree, " D ", &ft_strcmp);
	
	btree_apply_infix(tree, &ft_putstr);
}