/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:48:48 by epaksoy           #+#    #+#             */
/*   Updated: 2023/07/06 17:52:07 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i)
	{
		if (*(s + i) == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}

// girilen s stringi içinde sondan başlayarak c char'ını arıyor