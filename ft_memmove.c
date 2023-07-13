/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:12:42 by epaksoy           #+#    #+#             */
/*   Updated: 2023/07/13 19:12:39 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src)
		return (NULL);
	if (dst < src)
		ft_memcpy(dst, src, len);
	else
	{
		while (len)
		{
			*(unsigned char *)(dst + len) = *(unsigned char *)(src + len);
			len--;
		}
	}
	return ((void *)dst);
}

// verilen src parametresinin len karakterlik kısmını dst'e yazıyor
// ft_memcpy'den farkı eger src ve dst aynı listede ise
// aynı degerleri yazmadıgından emin olmak icin sondan yazıyor