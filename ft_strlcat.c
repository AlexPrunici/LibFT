/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprunici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/17 19:33:56 by aprunici          #+#    #+#             */
/*   Updated: 2016/10/17 19:38:10 by aprunici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t ret;

	ret = ft_strlen(src);
	i = 0;
	while (dst[i] && i < size)
		i++;
	ret += ((i < size) ? i : size);
	if ((int)(size - ft_strlen(dst) - 1) > 0)
		ft_strncat(dst, (char *)src, size - ft_strlen(dst) - 1);
	return (ret);
}
