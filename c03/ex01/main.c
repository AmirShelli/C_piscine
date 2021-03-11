#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
    char a[] = "hell no!";
    char b[] = "hello!";

    printf("%d\n", ft_strncmp(a, b, 2)); //expected a positive numb
    printf("%d\n", ft_strncmp(b, a, 7)); //expected a negative numb
    printf("%d\n", ft_strncmp(a, a, 0)); //expected a zero
}