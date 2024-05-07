/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 05:19:14 by marvin            #+#    #+#             */
/*   Updated: 2024/05/07 05:19:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    t_list *tmp;

    if (!lst)
        return (NULL);
    tmp = lst;
    while (tmp->next)
        tmp = tmp->next;
    return (tmp);
}