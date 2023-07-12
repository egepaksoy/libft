/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:17:22 by epaksoy           #+#    #+#             */
/*   Updated: 2023/07/12 15:05:34 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (start >= ft_strlen(s))
	{
		str = (char *)malloc(sizeof(char));
		if (!str)
			return (0);
		return (str);
	}
	if ((ft_strlen(s) - start) < len)
		len = ft_strlen(s) - start;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (0);
	ft_strlcpy(str, (char *)(s + start), len + 1);
	return (str);
}

// s dizisinin start ile len değerleri arasındaki
// değerleri başka bir dizi oluşturup içine yazıyor