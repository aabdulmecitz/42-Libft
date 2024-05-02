/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 05:01:58 by marvin            #+#    #+#             */
/*   Updated: 2024/04/30 05:01:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "fcntl.h"

void	ft_putchar_fd(char c, int fd);

int main()
{
    int fd = open("newtextthis", O_WRONLY);
    ft_putchar_fd('c', fd);
    return 0;
}


