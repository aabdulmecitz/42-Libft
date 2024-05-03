/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 05:51:37 by marvin            #+#    #+#             */
/*   Updated: 2024/05/03 05:51:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
    int i;
    char *p1;

    i = 0;
    p1 = malloc(sizeof(char) * (ft_strlen(s1) + 1));
    if(!p1)
        return(NULL);
    while (s1[i])
    {
        p1[i] = s1[i];
        i++;
    }
    p1[i] = 0;
    return (NULL);
}