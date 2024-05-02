/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 17:55:05 by marvin            #+#    #+#             */
/*   Updated: 2024/04/29 17:55:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t s);

int main(int argc, char const *argv[])
{
    unsigned int size = 25;
	char src[25] = "Success\n";
	char dest[25] = "Garb\n";
    printf("%d" ,ft_strlcpy(hedef,kaynak,3));
    return 0;
}