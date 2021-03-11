
#include <unistd.h>
#include <stdio.h>

void		ft_sort_string_tab(char **tab);

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, &(*str), 1);
		str++;
	}
}

void	ft_putarr(char **arr, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		ft_putstr(arr[i]);
		write(1, "\n", 1);
		i++;
	}
}

int main()
{
	char *tab[] = {"are", "drake", "bass", NULL};
	ft_sort_string_tab(tab);
	ft_putarr(tab, 3);
}