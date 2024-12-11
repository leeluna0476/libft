/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojilee <seojilee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:32:46 by seojilee          #+#    #+#             */
/*   Updated: 2024/12/11 16:40:12 by seojilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*us;
	unsigned char	uchr;
	size_t			i;

	us = (unsigned char *)s;
	uchr = (unsigned char)c;
	i = 0;
	while (*(us + i) == uchr)
	{
		if (i == n)
		{
			return (NULL);
		}
		++i;
	}
	return ((void *)(us + i));
}
