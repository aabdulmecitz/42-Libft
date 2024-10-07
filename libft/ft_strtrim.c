/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozkaya <aozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:40:07 by aozkaya           #+#    #+#             */
/*   Updated: 2024/10/07 12:40:07 by aozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim_start(char const *str, char const *set)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (set[j] && str[i + j] == set[j])
			j++;
		if (set[j] == '\0')
			break ;
		i++;
	}
	return ((char *)str + i);
}

char	*ft_strtrim_end(char const *str, char const *set)
{
	char	*trimmed_str;
	int		str_len;
	int		set_len;
	int		i;

	str_len = ft_strlen(str);
	set_len = ft_strlen(set);
	while (str_len > 0)
	{
		i = 0;
		while (i < set_len && str[str_len - 1] != set[i])
			i++;
		if (i == set_len)
			break ;
		str_len--;
	}
	trimmed_str = malloc(sizeof(char) * (str_len + 1));
	if (!trimmed_str)
		return (NULL);
	ft_strlcpy(trimmed_str, str, str_len + 1);
	trimmed_str[str_len] = '\0';
	return (trimmed_str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*prccs;
	char	*last;
	char	*trimmed_str;

	if (s1 && set)
	{
		prccs = ft_strtrim_end(s1, set);
		if (!prccs)
			return (NULL);
		last = ft_strtrim_start(prccs, set);
		if (ft_strlen(last) == 0)
			return (ft_strdup(""));
		trimmed_str = malloc(sizeof(char) * (ft_strlen(last) + 1));
		if (!trimmed_str)
			return (NULL);
		ft_strlcpy(trimmed_str, last, ft_strlen(last) + 1);
		free(prccs);
		return (trimmed_str);
	}
	return (NULL);
}
