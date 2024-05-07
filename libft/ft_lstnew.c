/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 04:31:47 by marvin            #+#    #+#             */
/*   Updated: 2024/05/07 04:31:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
    t_list *mlist;

    mlist = malloc(sizeof(t_list));
    if(!mlist)
        return (NULL);
    mlist->content = content;
    mlist->next = NULL;
    return (mlist);
}