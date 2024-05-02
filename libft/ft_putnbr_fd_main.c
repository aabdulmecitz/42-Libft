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
#include <stdio.h>
#include "fcntl.h"

void	ft_putnbr_fd(int n, int fd);

int main()
{
    int fd = open("exampletext", O_WRONLY);
    ft_putnbr_fd("-85431", fd);
    return 0;
}