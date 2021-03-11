#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
    printf("length of a null  str:  %d\n",ft_strlen(""));
    printf("length of a      char:  %d\n",ft_strlen("h"));
    printf("length of a short str:  %d\n",ft_strlen("he"));
    printf("length of a       str:  %d\n",ft_strlen("hello"));
}