/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojilee <seojilee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:20:01 by seojilee          #+#    #+#             */
/*   Updated: 2024/12/11 20:17:44 by seojilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s = (const unsigned char *)src;

	d = (unsigned char *)dst;
	if (d < s)
	{
		ft_memcpy(d, s, n);
	}
	else if (d > s)
	{
		d += (n - 1);
		s += (n - 1);
		while (n > 0)
		{
			*d = *s;
			--d;
			--s;
			--n;
		}
	}
	return (dst);
}
