/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozkaya <aozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:38:57 by aozkaya           #+#    #+#             */
/*   Updated: 2024/10/07 12:38:57 by aozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_number_of_words(char const *s, char c)
{
	int	i;
	int	count;
	int	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (s[i] == c)
			in_word = 0;
		i++;
	}
	return (count);
}

static char	*ft_word_into_tab(char const *s, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

static void	ft_free(char **strs, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}

static int	is_result_ok(char **res, const char *s, char c)
{
	int	i;
	int	word_i;
	int	start;

	word_i = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != 0)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			res[word_i] = ft_word_into_tab(s, start, i);
			if (!res[word_i])
				return (ft_free(res, word_i), 0);
			word_i++;
		}
	}
	res[word_i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		word_count;

	if (!s)
		return (NULL);
	word_count = ft_number_of_words(s, c);
	str = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!str)
		return (NULL);
	if (!is_result_ok(str, s, c))
		return (NULL);
	return (str);
}
