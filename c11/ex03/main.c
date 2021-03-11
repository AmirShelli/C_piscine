#include <stdio.h>

int ft_count_if(char **tab, int length, int(*f)(char*));

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int main()
{
	char *tab[5] = {"","hello"};
	printf("%d",ft_count_if(tab, 2, &ft_strlen));
}
