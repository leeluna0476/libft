/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojilee <seojilee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:20:04 by seojilee          #+#    #+#             */
/*   Updated: 2025/04/09 00:40:53 by seojilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// c표준: memory size_t로 정렬 필요.
// 아래는 임시...
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	size_t			wordsize_c;
	size_t			divlen_size;
	size_t			modlen_size;

	ptr = (unsigned char *)b;
	wordsize_c = c;
	for (int i = 1; i < 8; ++i)
		wordsize_c |= wordsize_c << (i * sizeof(size_t));
	divlen_size = len / sizeof(size_t);
	while (divlen_size-- > 0)
	{
		*(size_t *)ptr = wordsize_c;
		ptr += sizeof(size_t);
	}
	modlen_size = len % sizeof(size_t);
	while (modlen_size-- > 0)
	{
		*ptr = c;
		++ptr;
	}
	return (b);
}
