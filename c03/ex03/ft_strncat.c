#include <stdio.h>
char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    char *start = dest;
    int i;

    i = 0;
    while (*dest)
    {
        dest++;
    }

    while ((src[i]) && (i < nb))
    {
        dest[i] = src[i];
        i++;
        printf("%d\n", i);
        printf("%c\n", src[i]);
    }
    while(dest[i])
    {
        dest[i] = '\0';
        i++;
    }
    return start;
}