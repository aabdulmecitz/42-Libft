/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 06:17:46 by marvin            #+#    #+#             */
/*   Updated: 2024/05/03 06:17:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
    size_t i;
    size_t j;
    char *f;

    if (!s1 || !s2)
        return (NULL);
    f = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    if (!f)
        return (NULL);
    i = 0;
    while (s1[i] != 0)
    {
        f[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j] != 0)
    {
        f[i + j] = s2[j];
        j++;
    }
    f[i + j] = 0;
    return(NULL);
}