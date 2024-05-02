/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 06:14:02 by marvin            #+#    #+#             */
/*   Updated: 2024/04/30 06:14:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
    long nb;

    nb = n;
    if(nb < 0)
    {
        ft_putchar_fd('-', fd);
        nb *= -1;
    }
    if(nb < 10)
        ft_putchar_fd(nb + 48, fd);
    if(nb > 10)
    {
        ft_putnbr_fd(nb / 10, fd);
        ft_putnbr_fd(nb % 10, fd);
    }
}