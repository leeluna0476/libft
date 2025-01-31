/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojilee <seojilee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 10:20:02 by seojilee          #+#    #+#             */
/*   Updated: 2025/01/31 13:40:34 by seojilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// substr_size + start <= s_len
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	const size_t	s_len = ft_strlen(s);
	size_t			substr_size;
	char			*substr;

	if (start > s_len)
		return (NULL);
	if (len <= s_len - start)
		substr_size = len;
	else
		substr_size = s_len - start;
	substr = malloc(substr_size + 1);
	if (substr)
		ft_strlcpy(substr, s + start, substr_size + 1);
	return (substr);
}
