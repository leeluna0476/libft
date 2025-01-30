/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojilee <seojilee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 13:49:38 by seojilee          #+#    #+#             */
/*   Updated: 2025/01/30 13:55:04 by seojilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
    const size_t	s1_len = ft_strlen(s1);
	char			*s;

	s = malloc(s1_len + 1);
	if (s)
		ft_strlcpy(s, s1, s1_len + 1);
	return (s);
}
