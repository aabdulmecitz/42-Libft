/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 17:57:08 by marvin            #+#    #+#             */
/*   Updated: 2024/05/03 17:57:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_count_words(char const *str, char c)
{
    int num;
    int i;

    num = 0;
    i = 0;
    while (str[i] != 0)
    {
        if (str[i] == c)
            i++;
        else
        {
            num++;
            while (str[i] != 0 && str[i] != c)
                i++;
        }
        i++;
    }
    return(num);
}

char	*ft_make_words(char *word, char const *s, int j, int word_ln)
{
	int	i;

	i = 0;
	while (word_ln > 0)
        word[i++] = s[j - word_ln--]; 
    word[i] = 0;
	return (word);
}

char	**ft_split_words(char **res, const char *s, char c, int word_ct)
{
	int	i;
	int	j;
	int	word_ln;

	i = 0;
	j = 0 ;
	word_ln = 0;
	while (s[j] && i < word_ct)
	{
		while (s[j] && s[j] == c)
			j++;
		while (s[j] && s[j] != c)
		{
			j++;
			word_ln++;
		}
		res[i] = (char *)malloc(sizeof(char) * (word_ln + 1));
		if (!res[i])
			return (0);
		ft_make_words (res[i], s, j, word_ln);
		word_ln = 0;
		i++;
	}
	res[i] = 0;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	int			word_ct;
	char	**res;

	if (s == 0)
		return (0);
	word_ct = ft_count_words(s, c);
	res = (char **)malloc(sizeof(char *) * (word_ct + 1));
	if (!res)
		return (0);
	ft_split_words (res, s, c, word_ct);
	return (res);
}