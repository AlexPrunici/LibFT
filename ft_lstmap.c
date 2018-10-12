/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprunici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/23 16:45:31 by aprunici          #+#    #+#             */
/*   Updated: 2016/10/23 16:49:02 by aprunici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*list;
	t_list	*res;

	if (!lst)
		return (NULL);
	list = f(lst);
	res = list;
	if (!res)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
		list->next = f(lst);
		if (list->next == NULL)
			return (NULL);
		list = list->next;
	}
	return (res);
}
