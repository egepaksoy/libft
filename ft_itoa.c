/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:50:24 by epaksoy           #+#    #+#             */
/*   Updated: 2023/07/16 14:25:23 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlen(int n)
{
	int	len;

	len = 0;
	if (!n)
		return (1);
	if (n < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*ret;
	int		len;
	int		neg;

	if (n == -2147483647)
		return ("-2147483647");
	if (!n)
		return ("0");
	len = ft_numlen(n);
	neg = 1;
	if (n < 0)
		neg = -1;
	n *= neg;
	ret = (char *)malloc(sizeof(char) * len + 1);
	if (!ret)
		return (0);
	ret[len] = '\0';
	while (--len >= 0)
	{
		ret[len] = (n % 10) + 48;
		n /= 10;
	}
	if (neg == -1)
		ret[0] = '-';
	return (ret);
}

// girilen n integerini string'e donusturuyor
// sayı negatif ise başına - koyuyor