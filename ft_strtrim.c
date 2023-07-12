/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 19:34:29 by epaksoy           #+#    #+#             */
/*   Updated: 2023/07/10 20:49:18 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*res;
	size_t		i;

	i = 0;
	while (*s1 == *(set + i) && *(set + i) && *s1)
	{
		s1++;
		i++;
	}
	len = ft_strlen(s1) - 1;
	while (len && *(s1 + len) == *(set + i) && i)
	{
		len--;
		i--;
	}
	res = (char *)malloc(sizeof(char) * (len + 1) + 1);
	if (!res)
		return (0);
	ft_memcpy(res, s1, len);
	res[len + 1] = 0;
	return (res);
}

// s1 dizisinin basında ve sonunda set dizisini
// kesip yeni bir diziye kaydediyor ve onu donduruyor
//!TODO: Bu koda bak bidaha