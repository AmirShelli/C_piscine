#include <stdio.h>

int ft_iterative_power(int nb, int i);

int main()
{
	int i, n;

	n = 2;
	i = 3;
    printf("%d ^ %d = %d", n, i, ft_iterative_power(n, i));
}