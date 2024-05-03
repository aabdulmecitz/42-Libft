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
#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char f(int i, char c)
{
    c = 0;
    return ('Q' + (char)i)
}

int main(int argc, char const *argv[])
{
    char s1[] = "asdg";
    char *s2;

    s2 = ft_strmapi(s1, *f);
    printf("%s", s2);
    return 0;
}
