/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:46:43 by marvin            #+#    #+#             */
/*   Updated: 2024/04/29 18:46:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
    size_t i;
    size_t s;
    size_t d;

    d = ft_strlen(dst);
    s = ft_strlen((char *)src);
    i = 0;

    if(n <= d)
        return(n + s);
    while(src[i] != 0 && d + i + 1 < n)
    {
        dst[d + i] = src[i];
        i++;
    }
    dst[d + i] = 0;
    return(d + s);
}