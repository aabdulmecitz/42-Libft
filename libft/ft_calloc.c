/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 04:47:45 by marvin            #+#    #+#             */
/*   Updated: 2024/04/30 04:47:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
    void *mem;

    mem = malloc(count * size);
    if(!mem)
        return(NULL);
    ft_memset(mem, NULL, size);
    return (mem);
}