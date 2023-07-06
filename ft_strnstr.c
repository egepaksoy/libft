/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:13:54 by epaksoy           #+#    #+#             */
/*   Updated: 2023/07/06 16:32:36 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t needle_len;
    size_t n;

    needle_len = ft_strlen(needle);
    if (needle_len > len)
        return (NULL);

    n = 0;
    while (*haystack && n + needle_len <= len)
    {
        if (*haystack == *needle && !(ft_strncmp(haystack, needle, needle_len)))
            return ((char *)haystack);
        haystack++;
        n++;
    }
    return (NULL);
}
