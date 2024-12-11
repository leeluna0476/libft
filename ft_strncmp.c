/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojilee <seojilee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:00:01 by seojilee          #+#    #+#             */
/*   Updated: 2024/12/11 19:57:30 by seojilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*us1;
	unsigned char	*us2;

	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*us1 != *us2)
		{
			return (*us1 - *us2);
		}
		else if (!*us1 || !*us2)
		{
			break ;
		}
		++us1;
		++us2;
		--n;
	}
	return (0);
}
