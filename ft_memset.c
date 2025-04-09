/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojilee <seojilee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:20:04 by seojilee          #+#    #+#             */
/*   Updated: 2025/04/09 11:30:32 by seojilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static uintptr_t	align_ptr(void *b, size_t align_size)
{
	uintptr_t	uint_ptr;
	uintptr_t	if_not_aligned;

	uint_ptr = (uintptr_t)b;
	if_not_aligned = uint_ptr % align_size;
	if (if_not_aligned)
		return (uint_ptr + (align_size - if_not_aligned));
	else
		return (uint_ptr);
}

static void	fill_in_buf_by_size(void *p, size_t c, size_t len, size_t type_size)
{
	size_t	i;

	i = 0;
	if (type_size == sizeof(size_t))
	{
		while (i < len)
			((size_t *)p)[i++] = c;
	}
	else
	{
		while (i < len)
			((unsigned char *)p)[i++] = c;
	}
}

static size_t	expand_1_to_word(char c)
{
	size_t	wordsize_c;
	size_t	i;

	wordsize_c = c;
	i = 1;
	while (i < sizeof(size_t))
	{
		wordsize_c |= wordsize_c << (i * 8);
		i <<= 1;
	}
	return (wordsize_c);
}

void	*ft_memset(void *b, int c, size_t len)
{
	uintptr_t		aligned_ptr;
	size_t			pre_align_bytes;
	size_t			wordsize_c;
	size_t			divlen_size;
	size_t			modlen_size;

	aligned_ptr = align_ptr(b, sizeof(size_t));
	pre_align_bytes = aligned_ptr - (uintptr_t)b;
	fill_in_buf_by_size(b, c, pre_align_bytes, sizeof(char));
	len -= pre_align_bytes;
	wordsize_c = expand_1_to_word(c);
	divlen_size = len / sizeof(size_t);
	fill_in_buf_by_size(\
			(void *)aligned_ptr, wordsize_c, divlen_size, sizeof(size_t));
	modlen_size = len % sizeof(size_t);
	fill_in_buf_by_size(\
			(void *)(aligned_ptr + divlen_size * sizeof(size_t)), \
			c, modlen_size, sizeof(unsigned char));
	return (b);
}
