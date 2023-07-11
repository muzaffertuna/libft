/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoktas <mtoktas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 19:27:14 by mtoktas           #+#    #+#             */
/*   Updated: 2023/07/10 20:13:25 by mtoktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (0);
	new->content = content;
	new->next = NULL;
	return (new);
}

/*int main()
{
    t_list *x;
    t_list *y;
    char a = 5;
    char b = 6;

    x = ft_lstnew(&a);
    y = ft_lstnew(&b);
    x->next = y;
    printf("%d", *(char *) x->next->content);
    return(0);
}*/