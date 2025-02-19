/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojilee <seojilee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 16:45:02 by seojilee          #+#    #+#             */
/*   Updated: 2025/02/19 13:38:00 by seojilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdbool.h>

void	*ft_realloc(void *ptr, size_t old_size, size_t new_size)
{
	unsigned char	*old_ptr;
	unsigned char	*new_ptr;
	size_t			alloc_size;
	size_t			i;

	old_ptr = (unsigned char *)ptr;
	alloc_size = new_size;
	if (!new_size && old_ptr)
		alloc_size = 1;
	new_ptr = malloc(alloc_size);
	if (!new_ptr)
		return (NULL);
	if (new_size && old_ptr)
	{
		i = 0;
		while (i < old_size && i < new_size)
		{
			new_ptr[i] = old_ptr[i];
			++i;
		}
	}
	free(ptr);
	return (new_ptr);
}

static size_t	skip_delimeter_or_else(const char *s, char c, bool skip_del)
{
	const char	*i = s;

	while (*i)
	{
		if ((skip_del && *i != c) || (!skip_del && *i == c))
			break ;
		++i;
	}
	return (i - s);
}

static void	*expand_vector(t_vector *vec)
{
	char	**update;

	update = ft_realloc(vec->ptr, vec->mem_size, (vec->mem_size << 1));
	if (!update)
		return (NULL);
	vec->ptr = update;
	vec->mem_size <<= 1;
	return (vec);
}

static void	*delete_strings(char **strings)
{
	while (*strings)
	{
		free(*strings);
		++strings;
	}
	free(strings);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	t_vector	vec;
	size_t		token_len;
	size_t		i;

	vec.mem_size = 4 * sizeof(char *);
	vec.ptr = malloc(vec.mem_size);
	if (!vec.ptr)
		return (NULL);
	i = 0;
	while (*s)
	{
		if ((i + 1) * sizeof(char *) == vec.mem_size)
		{
			if (!expand_vector(&vec))
				return (delete_strings(vec.ptr));
		}
		token_len = skip_delimeter_or_else(s, c, false);
		vec.ptr[i] = ft_substr(s, 0, token_len);
		if (!vec.ptr[i])
			return (delete_strings(vec.ptr));
		vec.ptr[++i] = NULL;
		s += token_len;
		s += skip_delimeter_or_else(s, c, true);
	}
	return (vec.ptr);
}
