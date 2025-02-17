/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojilee <seojilee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 15:09:09 by seojilee          #+#    #+#             */
/*   Updated: 2025/02/17 13:29:48 by seojilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/*
 * Partial and deferred writes는 O_NONBLOCK이 세팅되어 있을 때만 발생.
 * fcntl을 사용할 수 없기 때문에 따로 확인할 방법 X.
 * errno를 사용할 수 없고, void 반환형이기 때문에 예외처리를 할 방법 X.
 * partial writes는 반복해서 write하고, deferred writes는 무시한다.
 */
void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
