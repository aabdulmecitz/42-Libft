/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 04:33:48 by marvin            #+#    #+#             */
/*   Updated: 2024/04/30 04:33:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    
    i = 0;
    while(i < n)
    {
        if (((unsigned char *)s)[i] == (unsigned char)c)
            return((void *)(s + i));
        i++;
    }
    return (0);
}