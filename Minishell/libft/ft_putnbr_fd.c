/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakkaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:33:07 by sakkaya           #+#    #+#             */
/*   Updated: 2022/02/18 12:48:22 by sakkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_putstr_fd("-2147483648", fd);
			return ;
		}
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n / 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd('0' + n, fd);
}
//line 29 --> 427 sayısı, 10'a bölününce 42,7 olur. 
//7, line 32'de bekler, 42 fonksiyona tekrar atılır. 4,2 olur.
//2 ve 7 tek başlarına aşağıda bekler. 4 tekrar atılır.
//sonra sıra sıra 427 olarak yazılır, char olarak.
