/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozkaya <aozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 11:57:00 by aozkaya           #+#    #+#             */
/*   Updated: 2024/10/11 14:54:03 by aozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "libft.h"

// char	*ft_strchr(const char *s, int c)
// {
// 	while (*s)
// 	{
// 		if (*s == (char)c)
// 			return ((char *)s);
// 		s++;
// 	}
// 	if ((char)c == '\0')
// 		return ((char *)s);
// 	return (NULL);
// }

int main()
{
   // int i = open("./a.txt", O_RDWR);
    int j = open("./b.txt", O_RDWR);

  //  printf("%d\n", i);
   // printf("%d\n", j);
    ft_putchar_fd('a', 3);
    printf("\033[32m%s\033[0m\n",ft_itoa(-124325));
    return 0;
}
// int main(int argc, char const *argv[])
// {
//     const char s[] = "selam";

//     int c = '\0';
//     char *a = ft_strchr(s, c);

//     return 0;
// }

// c de listeler sadece bir veri tipi alir.
// pointerlarin aldigı adress değeri aslında 32 bitlik birşey o yüzden 2 üzeri 32 değer alıyor. unsigned int oluyor.
// printf("\033[32mBu yeşil bir metin.\033[0m\n");  // Yeşil yazı yazdıran marker

