/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdulmecitz <aabdulmecitz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 03:22:35 by aabdulmecit       #+#    #+#             */
/*   Updated: 2024/09/14 03:27:20 by aabdulmecit      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	// Char testleri
	printf("ft_isalpha('A'): %d\n", ft_isalpha('A'));
	printf("ft_isdigit('1'): %d\n", ft_isdigit('1'));
	printf("ft_isalnum('A'): %d\n", ft_isalnum('A'));
	printf("ft_isascii(128): %d\n", ft_isascii(128));
	printf("ft_isprint(' '): %d\n", ft_isprint(' '));
	printf("ft_toupper('a'): %c\n", ft_toupper('a'));
	printf("ft_tolower('A'): %c\n", ft_tolower('A'));

	// String ve hafıza testleri
	const char *s1 = "Hello";
	const char *s2 = "World";
	printf("ft_strncmp(s1, s2, 3): %d\n", ft_strncmp(s1, s2, 3));

	int mem1[] = {1, 2, 3, 4};
	int mem2[] = {1, 2, 0, 4};
	printf("ft_memcmp(mem1, mem2, 4): %d\n", ft_memcmp(mem1, mem2, 4));

	const char *str = "123";
	printf("ft_atoi(str): %d\n", ft_atoi(str));

	// Bellek işlemleri
	char buffer[10];
	ft_memset(buffer, 'A', 5);
	buffer[5] = '\0';
	printf("ft_memset: %s\n", buffer);

	ft_bzero(buffer, 5);
	printf("ft_bzero: %s\n", buffer);

	char src[] = "Source";
	char dst[10];
	ft_memcpy(dst, src, 6);
	printf("ft_memcpy: %s\n", dst);

	ft_memmove(dst + 2, dst, 4);
	printf("ft_memmove: %s\n", dst);

	char *memchr_result = ft_memchr("abcde", 'c', 5);
	printf("ft_memchr: %s\n", memchr_result);

	char *calloc_ptr = ft_calloc(10, sizeof(char));
	strcpy(calloc_ptr, "Test");
	printf("ft_calloc: %s\n", calloc_ptr);
	free(calloc_ptr);

	// Yazdırma işlemleri
	ft_putchar_fd('A', 1);
	printf("\n");
	ft_putstr_fd("Hello, World!", 1);
	printf("\n");
	ft_putendl_fd("Line with newline", 1);
	ft_putnbr_fd(12345, 1);
	printf("\n");

	// String işlemleri
	const char *str_find = "Hello";
	printf("ft_strchr: %s\n", ft_strchr(str_find, 'e'));
	printf("ft_strrchr: %s\n", ft_strrchr(str_find, 'l'));

	const char *haystack = "This is a haystack";
	const char *needle = "hay";
	printf("ft_strnstr: %s\n", ft_strnstr(haystack, needle, strlen(haystack)));

	char *dup_str = ft_strdup("Duplicate me");
	printf("ft_strdup: %s\n", dup_str);
	free(dup_str);

	char *substr = ft_substr("Substr this string", 7, 6);
	printf("ft_substr: %s\n", substr);
	free(substr);

	char *joined = ft_strjoin("Hello", " World");
	printf("ft_strjoin: %s\n", joined);
	free(joined);

	char *trimmed = ft_strtrim("  trim me  ", " ");
	printf("ft_strtrim: %s\n", trimmed);
	free(trimmed);

	char *itoa_str = ft_itoa(42);
	printf("ft_itoa: %s\n", itoa_str);
	free(itoa_str);

	char **split = ft_split("split this string", ' ');
	for (int i = 0; split[i] != NULL; i++) {
		printf("ft_split: %s\n", split[i]);
		free(split[i]);
	}
	free(split);

	// // Liste işlemleri
	// t_list *list = ft_lstnew("First node");
	// ft_lstadd_back(&list, ft_lstnew("Second node"));
	// printf("ft_lstsize: %d\n", ft_lstsize(list));
	// printf("ft_lstlast: %s\n", (char *)ft_lstlast(list)->content);
	// ft_lstclear(&list, free);

	return 0;
}
