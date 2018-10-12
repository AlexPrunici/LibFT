/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprunici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/17 20:38:30 by aprunici          #+#    #+#             */
/*   Updated: 2016/10/24 17:13:49 by aprunici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(char const *s1, char const *s2, size_t n)
{
	unsigned int		i;
	unsigned int		j;
	unsigned int		length;

	if (*s2 == '\0')
		return ((char *)s1);
	i = 0;
	length = ft_strlen(s2);
	while (s1[i] && i + length - 1 < n)
	{
		if (s1[i] == *s2)
		{
			j = 0;
			while (s1[i + j] == s2[j] && (i + j) < n)
			{
				if (s2[j + 1] == '\0' || (i + j) == n - 1)
					return ((char *)s1 + i);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
