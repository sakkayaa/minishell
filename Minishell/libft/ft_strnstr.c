/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakkaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:40:39 by sakkaya           #+#    #+#             */
/*   Updated: 2022/02/08 11:05:07 by sakkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	l_s;
	size_t	l_f;

	l_s = 0;
	l_f = 0;
	if (!find[0])
		return ((char *)str);
	while (str[l_s])
	{
		while (str[l_s + l_f] == find[l_f]
			&& l_s + l_f < len && find[l_f])
			l_f++;
		if (!find[l_f])
			return ((char *)str + l_s);
		l_f = 0;
		l_s++;
	}
	return (NULL);
}
