/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 03:44:50 by marvin            #+#    #+#             */
/*   Updated: 2024/04/30 03:44:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
    if(!dst && !src)
        return (0);
    if(dst < src)
        ft_memcpy(dst, src, n);
    else if (dst > src)
    {
        while (n--)
            *((unsigned char *)(dst + n)) = *((unsigned char *)(src + n));
    }
    return (dst);
}