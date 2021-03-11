#include <stdio.h>

char *ft_strdup(char *src);

int main(void)
{
    char *s1 = "String";
    char *s2 = ft_strdup(s1);
    printf("%s\n", s2);
    
}