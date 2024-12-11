/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojilee <seojilee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:19:58 by seojilee          #+#    #+#             */
/*   Updated: 2024/12/11 20:07:28 by seojilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char				*d;
	const unsigned char *s = (const unsigned char *)src;

	d = (unsigned char *)dst;
	while (n > 0)
	{
		*d = *s;
		++d;
		++s;
		--n;
	}
	return (dst);
}
