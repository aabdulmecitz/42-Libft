/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 06:07:24 by marvin            #+#    #+#             */
/*   Updated: 2024/04/30 06:07:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "fcntl.h"

void	ft_putendl_fd(char const *s, int fd);

int main()
{
    int fd = open("exampletext", O_WRONLY);
    ft_putendl_fd("whatsup man", fd);
    return 0;
}
