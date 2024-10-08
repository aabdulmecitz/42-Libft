/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozkaya <aozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:40:12 by aozkaya           #+#    #+#             */
/*   Updated: 2024/10/07 12:40:12 by aozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	render_len;
	char	*render;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s) || len == 0)
		return (ft_strdup(""));
	i = 0;
	render_len = ft_strlen(s + start);
	if (render_len > len)
		render_len = len;
	render = (char *)malloc(sizeof(char) * (render_len + 1));
	if (!render)
		return (NULL);
	i = 0;
	while (i < render_len)
	{
		render[i] = s[start + i];
		i++;
	}
	render[i] = 0;
	return (render);
}
