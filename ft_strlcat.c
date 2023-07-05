/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoktas <mtoktas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:08:55 by mtoktas           #+#    #+#             */
/*   Updated: 2023/07/05 15:06:41 by mtoktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dlen;

	i = 0;
	dlen = 0;
	if (dst)
		dlen = ft_strlen(dst);
	if (dstsize <= dlen)
		dlen = dstsize;
	else
	{
		while (src[i] && i < dstsize - dlen - 1)
		{
			dst[dlen + i] = src[i];
			i++;
		}
		dst[dlen + i] = 0;
	}
	return (dlen + ft_strlen(src));
}
