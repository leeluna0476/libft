/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojilee <seojilee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:20:15 by seojilee          #+#    #+#             */
/*   Updated: 2024/12/11 20:12:30 by seojilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	const size_t	src_len = ft_strlen(src);
	size_t			cpsize;

	src_len = ft_strlen(src);
	if (dstsize != 0)
	{
		cpsize = dstsize - 1;
		while (*src && cpsize > 0)
		{
			*dst = *src;
			++dst;
			++src;
			--cpsize;
		}
		*dst = '\0';
	}
	return (src_len);
}
