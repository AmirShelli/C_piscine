#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main()
{
    char a[] = "hi!";
    char b[] = "hello!";

    printf("%d\n", ft_strcmp(a, b)); //expected a positive numb
    printf("%d\n", ft_strcmp(b, a)); //expected a negative numb
    printf("%d\n", ft_strcmp(a, a)); //expected a zero
}