/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 14:53:50 by pbureera          #+#    #+#             */
/*   Updated: 2022/06/14 15:13:18 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *))
{
	t_list	*old;
	t_list	*new;

	if (!f || !del)
		return (NULL);
	old = NULL;
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (!new)
		{
			while (old)
			{
				new = old->next;
				(*del)(old->content);
				free(old);
				old = new;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&old, new);
		lst = lst->next;
	}
	return (old);
}
