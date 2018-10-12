/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprunici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/17 18:24:47 by aprunici          #+#    #+#             */
/*   Updated: 2016/10/24 17:45:34 by aprunici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*cpy;

	i = 0;
	cpy = (unsigned char *)s;
	if (!s)
		cpy = (unsigned char *)0;
	if (n > 0)
		while (i < n)
		{
			if (cpy[i] == (unsigned char)c)
				return ((void*)&cpy[i]);
			i++;
		}
	return (NULL);
}
