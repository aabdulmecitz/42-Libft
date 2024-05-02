/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 23:12:56 by marvin            #+#    #+#             */
/*   Updated: 2024/04/27 23:12:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
    unsigned int i;

    i = 0;
    if (n == 0)
        return (0);
    i = 0;
    while (s1[i] != 0 && s2[i] != 0 && s1[i] == s2[i] && i < n - 1)
        i++;
    return (s1[i] - s2[i]);
}