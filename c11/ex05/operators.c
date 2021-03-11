/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 06:46:39 by bharghaz          #+#    #+#             */
/*   Updated: 2021/03/03 06:46:40 by bharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
void	ft_putnbr(int nbr);

void	sum(int a, int b)
{
	ft_putnbr(a + b);
}

void	sub(int a, int b)
{
	ft_putnbr(a - b);
}

void	mul(int a, int b)
{
	ft_putnbr(a * b);
}

void	div(int a, int b)
{
	if (!b)
		ft_putstr("Stop : division by zero\n");
	else
		ft_putnbr(a / b);
}

void	mod(int a, int b)
{
	if (!b)
		ft_putstr("Stop : modulo by zero\n");
	else
		ft_putnbr(a % b);
}
