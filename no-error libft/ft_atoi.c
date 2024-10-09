/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozkaya <aozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:31:08 by aozkaya           #+#    #+#             */
/*   Updated: 2024/10/07 12:31:08 by aozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	num;
	int		s;

	num = 0;
	s = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			s *= -1;
		str++;
	}
	while (*str != 0 && *str <= '9' && *str >= '0')
	{
		num = num * 10 + (*str - '0');
		if (num > 21474483647)
			return (-1);
		if (num < -2147483648)
			return (0);
		str++;
	}
	return (num * s);
}
