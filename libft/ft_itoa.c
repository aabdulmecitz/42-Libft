/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozkaya <aozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:33:44 by aozkaya           #+#    #+#             */
/*   Updated: 2024/10/07 12:33:44 by aozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_nop(long n)
{
	long	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

void	ft_putnum(long num, char *str, int len)
{
	if (num != -2147483648)
	{
		while (num > 0)
		{
			str[--len] = (num % 10) + '0';
			num /= 10;
		}
	}
	else
		ft_putstr_fd("-2147483648", 1);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	num;

	num = n;
	len = ft_nop(num);
	str = (char *) malloc((sizeof(char) * (len + 1)));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		num = -num;
	}
	ft_putnum(num, str + (n < 0), len - (n < 0));
	return (str);
}
