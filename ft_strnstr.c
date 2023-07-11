/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:13:54 by epaksoy           #+#    #+#             */
/*   Updated: 2023/07/06 17:51:23 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t needle_len;

	needle_len = ft_strlen(needle);

	if (needle_len == 0)
		return ((char *)haystack);

	if (len == 0 || len < needle_len)
		return (NULL);

	while (*haystack && len >= needle_len)
	{
		if (ft_strncmp(haystack, needle, needle_len) == 0)
			return ((char *)haystack);

		haystack++;
		len--;
	}

	return (NULL);
}

// verilen haystack string'i içierisinde needle string'ini arıyor