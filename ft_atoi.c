/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojilee <seojilee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:20:05 by seojilee          #+#    #+#             */
/*   Updated: 2025/01/30 19:33:01 by seojilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static long	check_overflow(long sign, long num, long digit)
{
	static const long	long_div_ten = LONG_MAX / 10;

	if (num > long_div_ten)
	{
		if (sign == -1)
			return (LONG_MIN);
		else
			return (LONG_MAX);
	}
	else if (num == long_div_ten)
	{
		if (sign == -1 && digit > 8)
			return (LONG_MIN);
		else if (sign == 1 && digit > 7)
			return (LONG_MAX);
	}
	return (0);
}

/* ERROR HANDLING
 *
 * overflow:  LONG_MAX
 * underflow: LONG_MIN
 */
int	ft_atoi(const char *str)
{
	long	sign;
	long	num;
	long	digit;
	long	under_overflow;

	if (*str == '-')
	{
		sign = -1;
		++str;
	}
	else
		sign = 1;
	num = 0;
	while (*str && ft_isdigit(*str))
	{
		digit = *str - '0';
		under_overflow = check_overflow(sign, num, digit);
		if (under_overflow)
			return (under_overflow);
		num *= 10;
		num += digit;
		++str;
	}
	return ((int)(num * sign));
}
