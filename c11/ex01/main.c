#include <stdio.h>
int 	*ft_map(int *tab, int length, int(*f)(int));
void	ft_putnbr(int nbr);
void	ft_foreach(int *tab, int length, void (*f)(int));

int ft_change_int(int n)
{
	return (n / 2);
}

int main()
{
	int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 2, 6, 9, 5, 8, 6, 8, 9, 50 };
	printf("length:	%lu\n", sizeof(tab)/sizeof(*tab));
	ft_foreach(ft_map(tab, 19, &ft_change_int), 19, &ft_putnbr);
}
