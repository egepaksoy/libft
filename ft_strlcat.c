/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:29:54 by epaksoy           #+#    #+#             */
/*   Updated: 2023/07/06 16:12:35 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

size_t  ft_strlcat(char *restrict dst, const char * restrict src, size_t dstsize)
{
    size_t src_len;
    size_t dst_len;
    size_t n;

    src_len = 0;
    while (src[src_len])
        src_len++;
    
    dst_len = 0;
    while (dst[dst_len])
        dst_len++;

    if (src_len + dst_len >= dstsize)
        return (src_len + dst_len);

    n = 0;
    while (dst_len < (dstsize - 1) && src[n])
    {
        dst[dst_len] = src[n];
        n++;
        dst_len++;
    }
    
    dst[dst_len] = '\0';

    return (dst_len);
}
