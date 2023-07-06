/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:23:21 by epaksoy           #+#    #+#             */
/*   Updated: 2023/07/06 17:50:30 by epaksoy          ###   ########.fr       */
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
	while (n < (l - 1))
	{
		dst[n] = src[n];
		n++;
	}
	dst[n] = 0;
	return (n);
}
