/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoktas <mtoktas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 16:35:18 by mtoktas           #+#    #+#             */
/*   Updated: 2023/07/10 17:24:52 by mtoktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*rt;
	int		len;

	len = 0;
	if (!s)
		return (0);
	while (s[len])
		len++;
	rt = (char *)malloc(sizeof(char) * (len + 1));
	if (!rt)
		return (0);
	len = 0;
	while (*s)
	{
		rt[len] = (*f)(len, *s);
		s++;
		len++;
	}
	rt[len] = 0;
	return (rt);
}
