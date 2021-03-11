/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 20:42:58 by bharghaz          #+#    #+#             */
/*   Updated: 2021/02/21 20:48:37 by bharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char *sta;
	int		i;

	*sta = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (sta);
}
