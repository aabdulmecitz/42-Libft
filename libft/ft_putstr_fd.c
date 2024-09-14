/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 05:55:50 by marvin            #+#    #+#             */
/*   Updated: 2024/04/30 05:55:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fcntl.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		write (fd, "(NULL)", 6);
	else
		write (fd, s, ft_strlen(s));
}
