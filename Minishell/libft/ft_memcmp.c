/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakkaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:31:50 by sakkaya           #+#    #+#             */
/*   Updated: 2022/02/04 14:39:59 by sakkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)dst)[i] != ((unsigned char *)src)[i])
			return (((unsigned char *)dst)[i] - ((unsigned char *)src)[i]);
		i++;
	}
	return (0);
}



/*
#include <unistd.h>
#include <stdio.h>
int	main(int arg, **args)
{
	int arr1[] = {1, 2};
	int arr2[] = {1, 2};
	
	if (ft_memcmp(arr1, arr2, 2 * sizeof(int)) == 0)
		printf("Arrays are the same!");
	else
		printf("Arrays are the not same!");
}
*/

// strcmp --> (string comperson) --> stringleri karsilastirir.
// memcmp --> (memory comperson)--> bellek bolgelerini karsilastirir.

// isaret edilen 2 bellek bolgesinin de ayni olup olmadigini karsilastirir.
// Eger 0 dondururse belleklerde kontrol edilen yerler aynidir.
// 3. parametre ne kadar bellek bolgesinin kontrol edilecegini gosterir.

// memcmp'nin normalde calistigi kutuphane <string.h> tir.
