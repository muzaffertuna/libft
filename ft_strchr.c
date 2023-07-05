/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoktas <mtoktas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 16:21:17 by mtoktas           #+#    #+#             */
/*   Updated: 2023/07/05 16:29:40 by mtoktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;
	int		i;
	char	*str;

	ch = (char)c;
	i = 0;
	str = (char *)s;
	while (str[i])
	{
		if (str[i] == ch)
			return (str + i);
		i++;
	}
	if (ch == 0)
		return (str + i);
	return (0);
}
