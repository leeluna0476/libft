/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojilee <seojilee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 07:45:45 by seojilee          #+#    #+#             */
/*   Updated: 2025/01/31 07:54:23 by seojilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	mem_size;

	if (size && count > SIZE_MAX / size)
		return (NULL);
	mem_size = count * size;
	ptr = malloc(mem_size);
	if (ptr)
		ft_memset(ptr, 0, mem_size);
	return (ptr);
}
