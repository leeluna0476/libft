/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojilee <seojilee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:20:01 by seojilee          #+#    #+#             */
/*   Updated: 2024/12/11 19:12:09 by seojilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char				*d;
	const unsigned char *const	s = (const unsigned char *)src;
	size_t						i;
	size_t						t;

	d = (unsigned char *)dst;
	if (d < s)
	{
		ft_memcpy(d, s, n);
	}
	else if (d > s)
	{
		i = 0;
		while (i < n)
		{
			t = n - (i++);
			d[t] = s[t];
		}
	}
	return (dst);
}
