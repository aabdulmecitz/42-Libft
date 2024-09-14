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

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	h;
	size_t	n;

	needle_len = ft_strlen(needle);
	h = 0;
	if (!needle_len)
		return ((char *)haystack);
	while (haystack[h] && h <= len - needle_len)
	{
		n = 0;
		while (needle[n] && haystack[h + n] == needle[n])
			n++;
		if (n == needle_len)
			return ((char *)(haystack + h));
		h++;
	}
	return (NULL);
}
