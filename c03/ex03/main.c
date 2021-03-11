#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
    char dest[]= "go ";
    printf("%s", ft_strncat(dest, "away!", 2));
}