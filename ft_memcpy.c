/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:09:14 by epaksoy           #+#    #+#             */
/*   Updated: 2023/07/06 17:11:30 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    size_t i;

    i = 0;
    while (n > i)
    {
        *(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
        i++;
    }
    return ((void *)dst);
}
