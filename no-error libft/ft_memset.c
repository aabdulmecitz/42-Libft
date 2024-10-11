/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozkaya <aozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:38:20 by aozkaya           #+#    #+#             */
/*   Updated: 2024/10/07 12:38:20 by aozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((char *)b)[i] = c;
		i++;
	}
	return (b);
}

// belli bir boyut kadarına int de belirleidğimiz charı koyar.
// printf d yazinca 4 byte okuyor o yüzden sayı olsa bile byte byte yazınca 4 byte ı birden okuyor.
// printf c yazınca 1 byte okuyor o yüzcen direk charı yazdırııyor.
