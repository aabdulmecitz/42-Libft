/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozkaya <aozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:35:40 by aozkaya           #+#    #+#             */
/*   Updated: 2024/10/07 12:35:40 by aozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*mlist;

	mlist = malloc(sizeof(t_list));
	if (!mlist)
		return (NULL);
	mlist->content = content;
	mlist->next = NULL;
	return (mlist);
}
