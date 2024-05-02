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

#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t n);

int main()
{
    unsigned char src[] = "thisismeadamol";
    unsigned char dest[] = "aaaaaaaaa"
    ft_memmove(dest, src, 4);
    printf("%s", dest);
    return 0;
}
