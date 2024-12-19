/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_type.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdulmecitz <aabdulmecitz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:15:25 by aozkaya           #+#    #+#             */
/*   Updated: 2024/11/16 01:46:11 by aabdulmecit      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check_type(const char type, va_list args)
{
	int	count;

	count = 0;
	if (type == 'c')
		count += (char)ft_put_c(va_arg(args, int));
	if (type == 'i' || type == 'd')
		count += ft_put_d_i(va_arg(args, int));
	if (type == 's')
		count += ft_put_s(va_arg(args, char *));
	if (type == 'p')
		count += ft_put_p(va_arg(args, void *));
	if (type == 'u')
		count += ft_put_u(va_arg(args, unsigned int));
	if (type == 'x')
		count += ft_put_x(va_arg(args, unsigned int), 'x');
	if (type == 'X')
		count += ft_put_x(va_arg(args, unsigned int), 'X');
	if (type == '%')
		count += ft_put_c('%');
	return (count);
}