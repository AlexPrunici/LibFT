/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprunici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/17 20:42:15 by aprunici          #+#    #+#             */
/*   Updated: 2016/10/24 16:43:23 by aprunici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int	c;

	c = 0;
	while (s1[c] == s2[c])
	{
		if (s1[c] == '\0' && s2[c] == '\0')
			return (0);
		c++;
	}
	return ((unsigned char)s1[c] - (unsigned char)s2[c]);
}
