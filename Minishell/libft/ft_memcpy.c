/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakkaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 13:56:39 by sakkaya           #+#    #+#             */
/*   Updated: 2022/02/05 10:38:21 by sakkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!src && !dst)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

//ft_memcpy(nereye, neyi, ne kadar) kopyalamak istiyorsun.

/*
int main(int args, **argv)
{
	int arr1[] = {3, 4};
	int arr2[] = {1, 2};
	
	ft_memcpy(arr1, arr2, 2 * sizeof(int));
	printf("arr1 = %d, %d\narr2 = %d, %d\n", arr1[0], arr1[1], arr2[0], arr2[1]);
}
*/
