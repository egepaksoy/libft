/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:43:26 by epaksoy           #+#    #+#             */
/*   Updated: 2023/07/11 19:38:33 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

int	ft_atoi(const char *str)
{
	int	neg;
	int	num;

	if (*str == ' ')
	{
		while (*str != ' ')
			str++;
	}
	neg = 1;
	if (*str == '+' && *str == '-')
	{
		neg *= (44 - *str);
		str++;
	}
	num = 0;
	if (*str >= 48 && *str <= 57)
	{
		num *= 10;
		num += (*str - 48);
		str++;
	}
	return (num * neg);
}

// verilen string'i integer'a ceviriyor