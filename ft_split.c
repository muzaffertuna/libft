/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoktas <mtoktas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 14:18:18 by mtoktas           #+#    #+#             */
/*   Updated: 2023/07/12 17:12:20 by mtoktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcount(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

char	**ft_wordput(const char *s, char c, char **strs)
{
	size_t	i;
	size_t	j;
	size_t	flag;
	size_t	len;

	i = 0;
	j = 0;
	flag = 1;
	len = 0;
	while (s[j])
	{
		len = 0;
		while (s[j] == c)
			j++;
		while (s[j] && s[j] != c && ++len)
		{
			j++;
			flag = 1;
		}
		if (flag == 1)
			strs[i++] = ft_substr(s, j - len, len);
		flag = 0;
	}
	strs[i] = 0;
	return (strs);
}

char	**ft_split(const char *s, char c)
{
	char	**strs;

	if (!s)
		return (0);
	strs = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!strs)
		return (0);
	if (!ft_wordcount(s, c))
	{
		strs[0] = 0;
		return (strs);
	}
	return (ft_wordput(s, c, strs));
}
