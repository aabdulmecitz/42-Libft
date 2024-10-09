/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozkaya <aozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:38:49 by aozkaya           #+#    #+#             */
/*   Updated: 2024/10/07 12:38:49 by aozkaya          ###   ########.fr       */
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
