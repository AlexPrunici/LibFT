/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprunici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/17 19:02:56 by aprunici          #+#    #+#             */
/*   Updated: 2016/10/17 19:05:59 by aprunici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *nw;

	nw = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (nw != NULL)
		ft_strcpy(nw, s1);
	return (nw);
}
