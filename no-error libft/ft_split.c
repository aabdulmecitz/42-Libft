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
	{
		word[i] = s[start];
		start++;
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	*ft_free(char **strs, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

static void	ft_next_word(char const *s, char c, int *j, int *start)
{
	while (s[*j] == c)
		(*j)++;
	*start = *j;
	while (s[*j] && s[*j] != c)
		(*j)++;
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		word_count;
	int		start;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	word_count = ft_number_of_words(s, c);
	tab = malloc(sizeof(char *) * (word_count + 1));
	if (!tab)
		return (NULL);
	while (i < word_count)
	{
		ft_next_word(s, c, &j, &start);
		tab[i] = ft_word_into_tab(s, start, j);
		if (!tab[i])
			return (ft_free(tab, i));
		i++;
	}
	tab[i] = NULL;
	return (tab);
}


hjdgjd