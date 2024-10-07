/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozkaya <aozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:39:58 by aozkaya           #+#    #+#             */
/*   Updated: 2024/10/07 12:39:58 by aozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	h;
	size_t	n;

	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
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
