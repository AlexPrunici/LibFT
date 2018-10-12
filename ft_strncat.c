/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprunici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/17 19:16:06 by aprunici          #+#    #+#             */
/*   Updated: 2016/10/17 19:20:18 by aprunici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t len;
	size_t i;

	len = ft_strlen(s1);
	i = -1;
	while (s2[++i] && i < n)
	{
		s1[len] = s2[i];
		len++;
	}
	s1[len] = '\0';
	return (s1);
}
