#include "rush_test.h"
#include "helper.h"

void three_dig(int n, int d)
{
	if (d <= 10)
		if(n >= 20)
		{	
			tf_get_val(n - (n % 10));
			three_dig(n%10, d/10);
		}
		else 
			tf_get_val(n);
	else
	{
		tf_get_val(n/d);
		tf_get_val(d);
		three_dig(n%d , d/10);
	}
}

void numbers(char *str, int nb, int it)
{
	
	if( it <= 1)
		three_dig( nb, fract_dec(nb));
	else
	{
		three_dig( nb, fract_dec(nb));
		tf_get_val(next_dec(it - 1));
		numbers(ft_strncpy(str, fract_dig(nb), ft_strlen(str)),
				ft_atoi(ft_strncpy(str, fract_dig(nb), 3)), it - 1);
	}
}

int main()
{	
	char  str[] = "22623333";
	numbers(str, atoi(ft_strncpy(str, 0, ded_num(ft_strlen(str) % 3))) , iter(ft_strlen(str)));
	// printf("\n%d", atoi(ft_strncpy(str, 0, ded_num(ft_strlen(str)))));
}