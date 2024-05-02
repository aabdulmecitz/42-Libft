/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 23:43:31 by marvin            #+#    #+#             */
/*   Updated: 2024/04/29 23:43:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memcpy(void *dst, const void *src, size_t n);

int	main()
{
	unsigned char	src[] = " world!";
	unsigned char	dst[] = "hello";

	ft_memcpy(dst+5, src, 8);
	printf("%s", dst);
}