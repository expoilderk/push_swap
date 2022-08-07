/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 16:15:39 by mreis-me          #+#    #+#             */
/*   Updated: 2022/08/04 18:49:23 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	c;

	if (!dst && !src)
		return (0);
	c = 0;
	while (c < n)
	{
		((unsigned char *)dst)[c] = ((unsigned char *)src)[c];
		c++;
	}
	return (dst);
}
