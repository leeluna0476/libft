/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojilee <seojilee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:20:12 by seojilee          #+#    #+#             */
/*   Updated: 2024/12/11 20:11:57 by seojilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	real_dstsize;
	size_t	src_len;
	size_t	catdst;

	real_dstsize = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (real_dstsize < dstsize)
	{
		catdst = dstsize - 1;
		dst += real_dstsize;
		while (*src && catdst > real_dstsize)
		{
			*dst = *src;
			++dst;
			++src;
			--catdst;
		}
		*dst = '\0';
	}
	return (real_dstsize + src_len);
}
