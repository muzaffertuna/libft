/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoktas <mtoktas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 10:53:44 by mtoktas           #+#    #+#             */
/*   Updated: 2023/07/12 16:23:09 by mtoktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isinset(const char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_trimlen(char const	*s1, char const	*set)
{
	size_t		i;
	size_t		j;

	j = 0;
	i = 0;
	while (ft_isinset(s1[i], set) && s1[i])
		i++;
	if (i == ft_strlen(s1))
		return (i);
	while (ft_isinset(s1[ft_strlen(s1) - j - 1], set))
		j++;
	return (i + j);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*ptr;
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	len = 0;
	if (!set)
		return (ft_strdup(s1));
	if (!s1)
		return (0);
	while (s1[len])
		len++;
	len = len - ft_trimlen(s1, set) + 1;
	ptr = malloc(sizeof(char) * len);
	if (!ptr)
		return (0);
	while (ft_isinset(s1[i], set))
		i++;
	while (j < len - 1)
		ptr[j++] = s1[i++];
	ptr[j] = '\0';
	return (ptr);
}
