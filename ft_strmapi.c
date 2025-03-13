/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojilee <seojilee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 17:34:46 by seojilee          #+#    #+#             */
/*   Updated: 2025/03/13 17:42:20 by seojilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*str_to_return;
	size_t	i;

	str_to_return = malloc(ft_strlen(s) + 1);
	if (!str_to_return)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str_to_return[i] = f(i, s[i]);
		++i;
	}
	str_to_return[i] = '\0';
	return (str_to_return);
}
