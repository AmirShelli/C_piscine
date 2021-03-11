#include <stdio.h>
char *ft_strcpy(char *dest, char *src);

int main()
{
    char dest[]="";
    printf("%s", ft_strcpy(dest, "hello"));
}