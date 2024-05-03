/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:48:51 by marvin            #+#    #+#             */
/*   Updated: 2024/05/03 18:48:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

char f(unsigned int a, char b)
{
    a = 0
    return(b * 2);
}

int main(int argc, char const *argv[])
{
    const char *p = "12344";
    printf("%p", ft_striteri(p, f));
    return 0;
}
