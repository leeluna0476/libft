/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojilee <seojilee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 22:04:04 by seojilee          #+#    #+#             */
/*   Updated: 2025/02/01 22:46:32 by seojilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stdbool.h>

static void	set_charmap(bool map[], const char *set)
{
	while (*set)
	{
		map[(unsigned char)*set] = true;
		++set;
	}
}

static size_t	find_first_not_of(const char *s, const bool map[])
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (!map[(unsigned char)s[i]])
			return (i);
		++i;
	}
	return (SIZE_MAX);
}

static size_t	find_first_not_of_back(const char *s, const bool map[])
{
	size_t	i;

	i = ft_strlen(s);
	while (i--)
	{
		if (!map[(unsigned char)s[i]])
			return (i);
	}
	return (SIZE_MAX);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	bool	map[UCHAR_MAX + 1];
	size_t	i_first_not_of;
	size_t	i_first_not_of_back;

	ft_memset(map, 0, sizeof(map));
	set_charmap(map, set);
	i_first_not_of = find_first_not_of(s1, map);
	if (i_first_not_of == SIZE_MAX)
		return (ft_strdup(""));
	i_first_not_of_back = find_first_not_of_back(s1, map);
	return (ft_substr(s1, \
				i_first_not_of, i_first_not_of_back - i_first_not_of + 1));
}
