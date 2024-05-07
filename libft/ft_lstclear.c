/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 05:29:47 by marvin            #+#    #+#             */
/*   Updated: 2024/05/07 05:29:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list tmp;

    while (!tmp)
    {
        tmp = (*tmp)->next;
        ft_lstdelone(*lst, del);
        *lst = tmp;
    }
    free(*lst);
    *lst = NULL;
}