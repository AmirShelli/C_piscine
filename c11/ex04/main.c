#include <stdio.h>

int		ft_is_sort(int *tab, int length, int (*f)(int, int));

int ft_is_lower(int a, int b)
{
	return (a - b);
}

int main()
{
	int tab[] = {1, 3, 5};
	printf("%d",ft_is_sort(tab, 3, &ft_is_lower));
}
