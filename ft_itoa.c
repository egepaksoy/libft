/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:50:24 by epaksoy           #+#    #+#             */
/*   Updated: 2023/07/15 18:22:54 by epaksoy          ###   ########.fr       */
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
	len = ft_numlen(n);
	ret = (char *)malloc(sizeof(char) * len + 1);
	if (n < 0)
	{
		while ()
	}
}

// girilen n integerini string'e donusturuyor
// sayı negatif ise başına - koyuyor