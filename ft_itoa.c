/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoktas <mtoktas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 15:53:35 by mtoktas           #+#    #+#             */
/*   Updated: 2023/07/10 14:30:09 by mtoktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_digit(long int n)
{
	int	digit;

	digit = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		digit++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		digit++;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	int			i;
	long int	nb;
	char		*rt;
	int			digit;

	nb = (long int)n;
	digit = ft_digit(nb);
	i = 0;
	rt = (char *)malloc(sizeof(char) * (digit + 1));
	if (!rt)
		return (0);
	rt[digit] = 0;
	if (nb < 0)
	{
		nb *= -1;
		rt[i++] = '-';
	}
	while (i <= --digit)
	{
		rt[digit] = (nb % 10) + 48;
		nb /= 10;
	}
	return (rt);
}
