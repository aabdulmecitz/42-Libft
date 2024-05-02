/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 04:33:48 by marvin            #+#    #+#             */
/*   Updated: 2024/04/30 04:33:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	printf("%s", ft_memchr("fatma", 'm', 5));
}


/*
verilen byte kadar kısmı kontrol edip orada aradığımız karakter var mı
diye bakar.
* aradığımız karakterden sonrasını çıktı veririr
bir stringdeki bir kelimenin bellekteki değerini döndürür
*/ 