/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 04:42:39 by marvin            #+#    #+#             */
/*   Updated: 2024/05/03 04:42:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

int main(int argc, char const *argv[])
{
    printf("%s", ft_strnstr("ashmetabdulmera", "abd", ));
    return 0;
}

/*
while (haystack[h] && h <= len - needle_len)
    {
        n = 0;
        while (needle[n] && haystack[h + n] == needle[n])
            n++;
        if(n == needle_len)
            return ((char *)(haystack + h));
        h++;
    }    
yaptığımızda aslında len - needle_len dediğimizde o aralıkta len - needle_len e gelene kadar bakiyor. varsa devam ediyor.
*/