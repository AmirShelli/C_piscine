#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max);

int   main(void)
{
  int* res = NULL;
  int i;
  int size;
  size = ft_ultimate_range(&res, 5, 10);
    for (i = 0; i < 5; i++)
        printf("%d,", res[i]);
    printf("\n %d\n", size);
    res = NULL;
    size = ft_ultimate_range(&res, -20, -17);
    for (i = 0; i < 3; i++)
        printf("%d,", res[i]);
    printf("\n %d\n", size);
  return (0);
}