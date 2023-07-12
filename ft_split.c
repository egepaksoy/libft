/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egep <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 22:50:21 by egep              #+#    #+#             */
/*   Updated: 2023/07/11 23:13:54 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	return(count++);
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
			n = i;
		}
		i++;
	}
	return (ret);
}

// verilen s stringi içerisinde c char'ına göre ayırıyor
