/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:58:56 by epaksoy           #+#    #+#             */
/*   Updated: 2023/07/06 17:04:01 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *d;

    d = (unsigned char *)s;

    while (*d &&  n>= 0)
    {
        if (*d == (unsigned char)c)
            return ((void *)d);
    }
    return (NULL);
}
