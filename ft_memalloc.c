/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprunici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/21 17:27:44 by aprunici          #+#    #+#             */
/*   Updated: 2016/10/21 17:29:46 by aprunici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *ret;

	if (size == 0)
		return (NULL);
	if (!(ret = (void *)(malloc(size))))
		return (NULL);
	ft_bzero(ret, size);
	return (ret);
}
