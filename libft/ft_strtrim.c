/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 06:32:25 by marvin            #+#    #+#             */
/*   Updated: 2024/05/03 06:32:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim_start(char const *str, char const *set)
{
    int i;
    int j;

    i = 0;
    while (str[i])
    {
        j = 0;
        while (str[i + j] == set[j])
            j++;
        if (j == ft_strlen(set))
            break;
        i++;
    }
    return (char *)str + i;
}

char    *ft_strtrim_end(char const *str, char const *set)
{
    int str_len;
    int set_len;

    str_len = ft_strlen(str);
    set_len = ft_strlen(set);
    while (str_len > 0)
    {
        int j;
        j = 0;
        while (j < set_len)
        {
            if (str[str_len - 1] == set[j])
                break;
            j++;
        }
        if (j == set_len)
            break;
        str_len--;
    }
    char *trimmed_str = malloc(sizeof(char) * (str_len + 1));
    if (!trimmed_str)
        return NULL;
    ft_strncpy(trimmed_str, str, str_len);
    trimmed_str[str_len] = '\0';
    return trimmed_str;
}

char	*ft_strtrim(char const *s1, char const *set)
{
    char *prccs;
    char *last;

    if (s1 && set)
    {
        prccs = ft_strtrim_end(s1, set);
        if (!prccs)
            return NULL;
        last = ft_strtrim_start(prccs, set);
        if (ft_strlen(last) == 0)
            return ft_strdup("");
        char *trimmed_str = malloc(sizeof(char) * (ft_strlen(last) + 1));
        if (!trimmed_str)
            return NULL;
        ft_strncpy(trimmed_str, last, ft_strlen(last));
        trimmed_str[ft_strlen(last)] = '\0';
        free(prccs);
        return trimmed_str;
    }
    return NULL;
}