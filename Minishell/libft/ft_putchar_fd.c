/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakkaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 10:33:58 by sakkaya           #+#    #+#             */
/*   Updated: 2022/02/14 17:24:27 by sakkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
//fd = file descriptor. (dosya tanımlayıcı) --> açık dosya tanımlayıcısıdır.
//fd; 0, 1, 2 değerlerini alabilir.
//fd --> 0 ise, standart girdi.
//fd --> 1 ise, metini kullanıcının ekranına yazdırır. standart çıktı.
//fd --> 2 ise, hatayı kullanıcının ekranına yazdırır. standart hata.
//---------------------------
// artık bir sonraki kullanacağın dosyaları int main'de open ile açmak istediğin
// zaman o dosyanın fd'si 3'ten başlayacak. çünkü 0-1-2'nin değerleri var.
// ---------------------------
// stdio.h'da bnların birer adı vardır.
// 0 = stdin,	1 =stdout,	2 = stderr.
// o yüzden write kullanınca stdio.h'ı kullanırız. bunların çalışması için.
