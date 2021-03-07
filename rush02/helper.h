#ifndef HELPER_H
#define HELPER_H

#include <stdio.h>
#include <stdlib.h>
int		next_dec(int power)
{
	if (!power)
		return (1);
	return (1000 * next_dec(power - 1));
}

int fract_dec(int nb)
{
	if (nb < 10)
		return 1;
	return 10 * (fract_dec(nb/10));
}

int fract_dig(int nb)
{
	if (nb < 10)
		return 1;
	return 1 + (fract_dig(nb/10));
}

int iter(int nb)
{
	if (nb % 3)
		return ((nb / 3) + 1);
	return (nb / 3);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		is_num(char c)
{
	return ((c > '0') && (c < '9'));
}

int		ft_atoi(char *str)
{
	int sign;
	int num;

	sign = 1;
	num = 0;
	while (*str && (!is_num(*str)))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str && is_num(*str))
	{
		if (is_num(*str))
		{
			num = num * 10 + (*str - 48);
		}
		str++;
	}
	return (sign * num);
}

int ded_num(int nb)
{
	if(!nb)
		return (3);
	return (nb % 3);
}

char	*ft_strncpy(char *src,unsigned int start, unsigned int end) //needs to be without malloc
{
    unsigned int i;
	char *dest;

	i = 0;
	dest = malloc(end); 
    while ((i < end) && (src[start])) 
    {
        dest[i] = src[start];
        i++;
		start++;
    }
    dest[i] = '\0';
    return (dest);
}	

#endif