#include <stdio.h>
#include "ft_stock_str.h"

struct s_stock_str *ft_strs_to_tab(int ac, char **av);
int main (int argc, char **argv)
{
	printf("%s\n", (ft_strs_to_tab(argc, argv)[3]).str);
}