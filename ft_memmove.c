/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprunici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/17 18:09:19 by aprunici          #+#    #+#             */
/*   Updated: 2016/10/19 19:22:57 by aprunici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*d_cpy;
	char	*s_cpy;

	i = 0;
	d_cpy = (char *)dst;
	s_cpy = (char *)src;
	if (s_cpy < d_cpy)
		while (++i <= len)
			d_cpy[len - i] = s_cpy[len - i];
	else
		while (i < len)
		{
			d_cpy[i] = s_cpy[i];
			i++;
		}
	return (dst);
}
