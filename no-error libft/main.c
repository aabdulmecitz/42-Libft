/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozkaya <aozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 11:57:00 by aozkaya           #+#    #+#             */
/*   Updated: 2024/10/11 20:02:46 by aozkaya          ###   ########.fr       */
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

void ft_function(unsigned int i, char  *a)
{
	a[i] = 't';
}

void ft_function2(unsigned int i, char * a)
{
	a[i] = 'c';
}
void ft_function3(unsigned int i, char * a)
{
	a[i] = 'a';
}

int main()
{
  //  // int i = open("./a.txt", O_RDWR);
  //   int j = open("./b.txt", O_RDWR);

  // //  printf("%d\n", i);
  //  // printf("%d\n", j);
  //   // ft_putchar_fd('a', 3);
  //   // printf("\033[32m%s\033[0m\n",ft_itoa(-124325));
  //   char a[] = "abcdef";
  //   int i = 0;
  //   char *b = malloc(20);
  //   while(a[i] != '\0'){
  //     b[i] = a[i]; 
  //     i++;
  //   }
  //   b[i] = '\0';
  //   ft_striteri(b, ft_function);
  //   //ft_striteri(b, ft_function2);

  //   return 0;
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
