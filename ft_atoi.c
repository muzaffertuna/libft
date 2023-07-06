/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoktas <mtoktas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:45:32 by mtoktas           #+#    #+#             */
/*   Updated: 2023/07/06 18:03:49 by mtoktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long unsigned int	num;
	int						np;

	num = 0;
	np = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		np = -1;
		str++;
	}
	else if (*str == '+')
	{
		np = 1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = 10 * num + *str - '0';
		str++;
	}
	return ((int)num * np);
}
