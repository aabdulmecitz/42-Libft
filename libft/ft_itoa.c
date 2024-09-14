/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:55:04 by marvin            #+#    #+#             */
/*   Updated: 2024/05/03 16:55:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nop(long n)
{
	int	count;

	count = 0;
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

void	ft_putnum(int num, char *str)
{
	int	i;
	int	rem;

	i = 0;
	while (num > 0)
	{
		rem = num % 10;
		str[i++] = rem + '0';
		num /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		pn;

	pn = 1;
	len = ft_nop(n);
	str = (char *) malloc((sizeof(char) * len) + 1);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		pn *= -1;
		str[0] = '-';
		len--;
	}
	ft_putnum(pn * n, str + (n < 0));
	str[len] = '\0';
	return (str);
}
