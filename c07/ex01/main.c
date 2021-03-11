#include <stdlib.h>
#include <stdio.h>

// int		*ft_range(int min, int max);

// void	ft_putstr(char *str)
// {
// 	while (*str)
// 	{
// 		write(1, &(*str), 1);
// 		str++;
// 	}
// }
int		*ft_range(int min, int max);
int   main(void)
{
int* res = NULL;
int i;
res = ft_range(5, 10);
for (i = 0; i < 5; i++)
  printf("%d,", res[i]);
printf("\n");
res = ft_range(-20, -15);
for (i = 0; i < 5; i++)
  printf("%d,", res[i]);
printf("\n");
res = ft_range(-2147483648, -2147483645);
for (i = 0; i < 3; i++)
    printf("%d,", res[i]);
printf("\n");
res = ft_range(10, 5);
printf("%x\n", (unsigned int)res);
}
