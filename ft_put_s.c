/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdulmecitz <aabdulmecitz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:19:44 by aozkaya           #+#    #+#             */
/*   Updated: 2024/11/16 01:46:49 by aabdulmecit      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int	ft_put_s(char *str)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	if (str == NULL)
	{
		count += ft_put_s("(null)");
		return (count);
	}
	while (str[i])
	{
		count += ft_put_c(str[i]);
		i++;
	}
	return (count);
}
