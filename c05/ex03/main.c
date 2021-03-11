#include <stdio.h>

int ft_recursive_power(int nb, int power);

int main()
{
	int i, n;

	n = 2;
	i = 3;
    printf("%d ^ %d = %d", n, i, ft_recursive_power(n, i));
}