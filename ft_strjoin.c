/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojilee <seojilee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 19:34:12 by seojilee          #+#    #+#             */
/*   Updated: 2025/01/31 19:40:46 by seojilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	const size_t	s1_len = ft_strlen(s1);
	const size_t	s2_len = ft_strlen(s2);
	const size_t	join_len = s1_len + s2_len;
	char			*joined_str;

	joined_str = malloc(join_len + 1);
	if (joined_str)
	{
		ft_strlcpy(joined_str, s1, s1_len + 1);
		ft_strlcpy(joined_str + s1_len, s2, s2_len + 1);
	}
	return (joined_str);
}
