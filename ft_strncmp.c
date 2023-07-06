/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 16:24:07 by epaksoy           #+#    #+#             */
/*   Updated: 2023/07/05 17:49:01 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i;

    i = 0;
    if (n <= 0)
        return (0);
    while (s1[i] && s2[i] && i < n)
    {
        if (s1[i] - s2[i])
    }
    return (s1[i] - s2[i]);
}

#include <stdio.h>
#include <string.h>

int main(int argv, char **argc)
{
    const char *s1 = "merhaba";
    const char *s2 = "merhabb";

    printf("\nstrncmp: %d", strncmp(s1, s2, argv));
    printf("\nft: %d", ft_strncmp(s1, s2, argv));
}
