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

#include <stdio.h>
#include "fcntl.h"

void	ft_putstr_fd(char *s, int fd);

int main()
{
    int fd = open("thistext", O_WRONLY);
    ft_putstr_fd("42Istanbul", fd);
    return 0;
}
