/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojilee <seojilee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:32:46 by seojilee          #+#    #+#             */
/*   Updated: 2024/12/11 19:06:13 by seojilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*us;
	unsigned char	uchr;

	us = (unsigned char *)s;
	uchr = (unsigned char)c;
	while (n > 0)
	{
		if (*us == uchr)
			return ((void *)(us));
		++us;
		--n;
	}
	return (NULL);
}
