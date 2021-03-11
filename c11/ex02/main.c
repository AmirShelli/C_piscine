#include <stdio.h>

int		ft_any(char **tab, int(*f)(char*));

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
	char *tab[5] = {NULL};
	printf("%d",ft_any(tab, &ft_strlen));
}
