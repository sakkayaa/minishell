/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakkaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 09:09:11 by sakkaya           #+#    #+#             */
/*   Updated: 2022/02/08 11:17:49 by sakkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_atoi(const char *str)
{
	int	c;
	int	isaret;
	int	count;

	c = 0;
	isaret = 1;
	count = 0;
	while (str[c] == ' ' || str[c] == '\n'
		|| str[c] == '\t' || str[c] == '\f'
		|| str[c] == '\v' || str[c] == '\r')
		c++;
	if (str[c] == '+' || str[c] == '-')
	{	
		if (str[c] == '-')
			isaret = -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		count = (count * 10) + (str[c] - '0');
		c++;
	}
	return (count * isaret);
}
