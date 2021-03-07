
#include "parser.h"

void	ft_cpy(char **str,char *str, int size);
char g_filename[] = "numbers.dict";

char **get_lines()
{
	int fo;
	int rd;
	char *str;
	char buff;
	int i = 0;

    char **arr = (char**)malloc(sizeof(char*) * 41);
	fo = open(g_filename, O_RDONLY);
	while((rd = read(fo,&buff,1)))
	{	
		if(rd > 0)
		{	
			str = malloc(1);
			i = 0;
			while (buff != '\n')
			{
				str[i] = buff;			
				ft_cpy(&str, str, i+1);
				i++;
				str[i] = '\0';
			}
		}
		else
			return NULL; //write error
		// if is_valid(str)
		// {	
			*arr = malloc(i);
			*arr = str;
			arr++;
			
		// } 
	}
	return arr;

}