/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprunici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/21 19:09:01 by aprunici          #+#    #+#             */
/*   Updated: 2016/10/24 16:11:49 by aprunici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*res;

	if (!s)
		return (0);
	if (!(res = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (start--)
		s++;
	ft_strncpy(res, s, len);
	res[len] = '\0';
	return (res);
}
