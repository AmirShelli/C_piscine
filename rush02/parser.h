#ifndef PARSER_H
# define PARSER_H
# include "helper.h"
# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <stdlib.h>
# include <fcntl.h>

void ignore_spaces(char **str)
{
	while((*(*str) == ' ') && (*(*str)))
		(*str)++;
}

void ignore_else(char **str)
{
	while((*(*str) != ' ') && (*(*str)))
		(*str)++;
}

void	ft_cpy(char **str,char *s, int size)
{
	char *new_arr = malloc(size);
	//save pointer
	while (*s)
	{		
		*new_arr = *s;
		new_arr++;
		(*str)++;
	} 
	(*str) = new_arr;
}

int n_words(char *str)
{
	int n;

	ignore_spaces(&str);
	n = 0;
	while(*str)
	{
		if (*str != ' ')
		{
			ignore_else(&str);
			n++;
		}
		else
			ignore_spaces(&str);
	}
	return (n);
}

int ft_wordlen(char *str, int n)
{
	int len;

	while (n--)
	{
		len = 0;
		ignore_spaces(&str);
		while ((*str != ' ') && (*str))
		{	
			len++;
			str++;	
		}
	}
	printf("%d\n", n);
	return (len);
}

// char *trim_spaces(**str)
// {
// 	if (n_words(*str) == 1)
// 	{	
// 		return (str[ft_strlen(*str) - 1] = 0);
// 	}
// 	else 
// 		return  ft_strjoin(str[ft_strlen(*str), trim_spaces(ft_strncpy(str, 0, 
// 			ft_strlen(*str) - ft_wordlen(*str))); //use join
// }

#endif