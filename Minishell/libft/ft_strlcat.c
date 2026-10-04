/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakkaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:20:09 by sakkaya           #+#    #+#             */
/*   Updated: 2022/02/07 18:00:05 by sakkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	a;
	size_t	i;

	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	a = ft_strlen(dst);
	i = 0;
	while (src[i] != '\0' && (a + 1 < size))
	{
		dst[a] = src[i];
		a++;
		i++;
	}
	dst[a] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}
