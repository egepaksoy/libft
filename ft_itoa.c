/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:50:24 by epaksoy           #+#    #+#             */
/*   Updated: 2023/07/12 16:50:47 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int n)
{
	int	ret;

	ret = 0;
	if (n < 0)
		ret++;
	while (n)
	{
		n /= 10;
		ret++;
	}
	return (ret);
}

int	ft_up(int num, int up)
{
	int	ret;

	ret = 1;
	while (up)
	{
		ret *= num;
		up--;
	}
	return (ret);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;
	int		i;

	len = ft_intlen(n);
	res = (char *) malloc(sizeof(char) * len + 1);
	if (!res)
		return (0);
	i = 0;
	if (n < 0)
	{
		*(res + i) = '-';
		i++;
		n *= -1;
		len--;
	}
	while (len)
	{
		*(res + i) = (n / ft_up(10, len - 1)) + 48;
		n %= ft_up(10, len - 1);
		len--;
		i++;
	}
	*(res + i) = '\0';
	return (res);
}

// girilen n integerini string'e donusturuyor
// sayı negatif ise başına - koyuyor