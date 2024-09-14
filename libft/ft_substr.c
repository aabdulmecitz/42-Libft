/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 05:59:40 by marvin            #+#    #+#             */
/*   Updated: 2024/05/03 05:59:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*render;

	if (*s)
	{
		if (start >= ft_strlen(s) || len == 0 || ft_strlen(s) == 0)
			return (ft_strdup(""));
		i = 0;
		while (i < len && s[i + start] != 0)
			i++;
		render = (char *)malloc((sizeof(char) * i) + 1);
		if (!render)
			return (NULL);
		j = 0;
		while (j < i)
		{
			render[j] = s[start + j];
			j++;
		}
		render[j] = 0;
		return (render);
	}
	return (NULL);
}
