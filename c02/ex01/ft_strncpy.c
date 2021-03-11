#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while ( (i < n) && (src[i]) ) 
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}	


int main(void)
{
    char dest[] = "hey";
    printf("%s",ft_strncpy(dest, "hello", 3)); 
}