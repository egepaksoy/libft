/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 22:50:21 by egep              #+#    #+#             */
/*   Updated: 2023/07/12 16:53:06 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

# include	<stdlib.h>
# include	<unistd.h>


size_t	ft_strlcpy(char *dst, const char *src, size_t l)
{
	size_t	n;

	n = 0;
	while (n < (l - 1) && src[n])
	{
		dst[n] = src[n];
		n++;
	}
	dst[n] = 0;
	return (n);
}

size_t	ft_strlen(const char *c)
{
	size_t	x;

	x = 0;
	while (c[x] != '\0')
		x++;
	return (x);
}

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

int	count_arrs(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (*s)
	{
		if (*(s + i) == c)
		{
			count++;
			i++;
		}
	}
	return (count++);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		n;
	char	**ret;

	i = 0;
	n = 0;
	ret = (char **)malloc(sizeof(char *) * (count_arrs(s, c)) + 1);
	while (*(s + i))
	{
		if (*(s + i) == c)
		{
			*ret = ft_substr(s, n, i);
			ret++;
			n = i;
		}
		i++;
	}
	return (ret);
}

// verilen s stringi içerisinde c char'ına göre ayırıyor
//TODO: daha bitmedi
