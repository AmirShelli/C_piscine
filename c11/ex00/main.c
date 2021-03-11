void	ft_putnbr(int nbr);

int main()
{
	int tab[] = {1, 2, 3};
	ft_foreach(tab, 3, &ft_putnbr);
}
