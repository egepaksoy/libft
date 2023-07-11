/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:23:21 by epaksoy           #+#    #+#             */
/*   Updated: 2023/07/11 20:29:29 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t l)
{
	size_t	n;

	n = 0;
	while (n < (l - 1) && src[n])
	{
		dst[n] = src[n];
		n++;
	}
	dst[n] = 0;
	return (n);
}

// dst stringinin icine src string'ini yazıyor eger src sonuna gelirse veya
// yazması gereken tamamını yazarsa dst'in sonuna null atıp uzunlugu donduruyor