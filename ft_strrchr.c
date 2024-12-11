/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojilee <seojilee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:20:23 by seojilee          #+#    #+#             */
/*   Updated: 2024/12/11 20:16:00 by seojilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	chr;
	size_t	i;

	chr = (char)c;
	i = ft_strlen(s);
	s += i;
	while (*s != chr)
	{
		if (i == 0)
		{
			return (NULL);
		}
		--s;
		--i;
	}
	return ((char *)s);
}
