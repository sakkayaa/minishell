/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakkaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:25:13 by sakkaya           #+#    #+#             */
/*   Updated: 2022/02/08 02:43:30 by sakkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	const char		*tutan;

	tutan = s;
	i = ft_strlen(s);
	s = (s + i);
	while (*s != *tutan && (char )c != *s)
		s--;
	if ((char )c == *s)
		return ((char *)s);
	return (0);
}
