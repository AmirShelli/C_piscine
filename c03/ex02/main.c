#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int main()
{
    char dest[]= "hello ";
    printf("%s", ft_strcat(dest, "away!"));
}