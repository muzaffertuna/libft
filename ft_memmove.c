/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoktas <mtoktas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:47:05 by mtoktas           #+#    #+#             */
/*   Updated: 2023/07/05 12:29:47 by mtoktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*dst, const void	*src, size_t	len)
{
	unsigned char	*strdst;
	unsigned char	*strsrc;

	strdst = (unsigned char *)dst;
	strsrc = (unsigned char *)src;
	if (src == dst)
	{
		return (dst);
	}
	if (strdst > strsrc)
	{
		while (len--)
		{
			strdst[len] = strsrc[len];
		}
	}
	else
	{
		while (len--)
		{
			*strdst++ = *strsrc++;
		}
	}
	return (dst);
}
