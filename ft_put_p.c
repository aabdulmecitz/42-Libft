/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdulmecitz <aabdulmecitz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:19:40 by aozkaya           #+#    #+#             */
/*   Updated: 2024/11/16 01:45:52 by aabdulmecit      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_put_p(void *arg)
{
	int				count;
	unsigned long	adress;
	char			*alpha;

	alpha = "0123456789abcdef";
	adress = (unsigned long)arg;
	count = 0;
	count += ft_put_s("0x");
	count += ft_base(adress, alpha);
	return (count);
}
