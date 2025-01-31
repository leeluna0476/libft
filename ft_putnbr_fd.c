/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojilee <seojilee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 07:57:15 by seojilee          #+#    #+#             */
/*   Updated: 2025/01/31 10:17:40 by seojilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

static int	get_digit(int n)
{
	int	digit;

	digit = 1;
	while (n / digit / 10)
		digit *= 10;
	return (digit);
}

void	ft_putnbr_fd(int n, int fd)
{
	long long	sign;
	long long	digit;
	long long	num;

	if (n < 0)
	{
		sign = -1;
		ft_putchar_fd('-', fd);
	}
	else
		sign = 1;
	num = n * sign;
	digit = get_digit(n);
	while (digit)
	{
		ft_putchar_fd((num / digit % 10) + '0', fd);
		digit /= 10;
	}
	ft_putchar_fd('\n', fd);
}
