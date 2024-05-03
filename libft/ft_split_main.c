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

char	**ft_split(char const *s, char c);

int	main()
{
	char	**a;
    printf("bolunmeden once:tarih,tekerrur,edecek\n");
    a = ft_split("tarih,tekerrur,edecek", ',');
	int	i = 0;
	while (a[i] != NULL)
		printf("%s\n", a[i++]);
		return (0);	
}