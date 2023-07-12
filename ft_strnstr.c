/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoktas <mtoktas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:21:47 by mtoktas           #+#    #+#             */
/*   Updated: 2023/07/12 17:24:22 by mtoktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)haystack;
	i = 0;
	if (!ft_strlen(needle) || needle == str)
		return (str);
	if (!len)
		return (0);
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] == needle[j])
		{
			if (needle[j + 1] == 0 && i + j < len)
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}
