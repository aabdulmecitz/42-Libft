/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:59:02 by marvin            #+#    #+#             */
/*   Updated: 2024/05/03 18:59:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *result;
    int i;

    if(!s)
        return (NULL);
    i = 0;
    result = ft_strdup(s);
    if(!result)
        return (NULL);
    while(result[i] != 0)
    {
        result[i] = f(i, result[i]);
        i++;
    }
    return (result);
}