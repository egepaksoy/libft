/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:37:16 by epaksoy           #+#    #+#             */
/*   Updated: 2023/07/06 17:48:51 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	s_len;
	char	*c;

	s_len = ft_strlen(s);
	c = (char *)malloc(sizeof(char) * s_len + 1);
	ft_strlcpy(c, s, s_len);
	return (c);
}
