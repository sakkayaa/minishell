/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakkaya    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 15:31:12 by sakkaya            #+#    #+#             */
/*   Updated: 2022/07/31 15:31:18 by sakkaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	count(char **str)
{
	int	len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

void	quick_sort(char **str)
{
	int		idx;
	int		idx2;
	char	*temp;

	idx = 0;
	while (*(str + idx))
	{
		idx2 = 0;
		while (*(str + idx2))
		{
			if (ft_strcmp(*(str + idx), *(str + idx2)) < 0)
			{
				temp = *(str + idx);
				*(str + idx) = *(str + idx2);
				*(str + idx2) = temp;
			}
			idx2++;
		}
		idx++;
	}
}
