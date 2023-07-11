/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:29:54 by epaksoy           #+#    #+#             */
/*   Updated: 2023/07/11 20:23:16 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dst_len <= src_len)
		return (dstsize + src_len);
	i = 0;
	if (src_len + dst_len + 1 < dstsize)
	{
		while (*(src + i))
		{
			*(dst + dst_len + i) = *(src + i);
			i++;
		}
	}
	*(dst + dst_len + i) = 0;
	return (dst_len + src_len);
}

// dst string'inin sonuna src string'ini ekliyor