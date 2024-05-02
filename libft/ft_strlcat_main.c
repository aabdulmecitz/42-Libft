/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:46:43 by marvin            #+#    #+#             */
/*   Updated: 2024/04/29 18:46:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n);

int    main()
{
  char  dest[20] = "vlademir";
  char  src[10] = "bush";
  
  printf("Birlesmeden once string: \"%s\"\n", dest);
  printf("\n%d\n", ft_strlcat(dest, src, 14));
  printf("\nBirlesmeden sonra string: \"%s\"\n", dest);
}