/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakkaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:01:26 by sakkaya           #+#    #+#             */
/*   Updated: 2022/02/05 10:40:09 by sakkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memset(void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)src)[i] = c;
		i++;
	}
	return (src);
}

/*
int main (int args, char **argv)
{
	int arr1[] = {3, 4};
	
	ft_memset(arr1, 0, 2 * sizeof(int));
	printf("arr1 = %d, %d", arr1[0], arr1[1]);
}
*/

// ft_memset(neyin icini, neyle, ne kadar) dolduruyoruz.
// Bu kod, normaldeki memsettir.
// Burada icini 0 ile doldurdugumuzda bir sıkıntı cikmiyor. 
// Fakat icerisini 0'dan farkli bir sey ile dosdurursak alakasiz sonuclar elde ederiz.
// Sebebi ise 22. satirda pointeri char'a donustirmusuz. Oysaki icine int degeri atiyoruz.
// Eger 0'dan farkli bir degerler ile de dolmasini istiyorsak 22. satirda "unsigned char" degil, "int" yapmamiz lazim.
