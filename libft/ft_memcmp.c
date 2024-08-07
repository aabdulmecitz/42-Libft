/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 15:34:22 by marvin            #+#    #+#             */
/*   Updated: 2024/04/28 15:34:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *p1;
    const unsigned char *p2;

    p1 = s1;
    p2 = s2;
    if(n == 0)
        return (0);
    while (n--)
    {
        if (*p1 != *p2)
            return(*p1 - *p2);
        else
        {
            p1++;
            p2++;
        }
    }
    return(0);
}