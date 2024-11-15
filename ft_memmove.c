/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:22:14 by hmouis            #+#    #+#             */
/*   Updated: 2024/11/07 12:36:34 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*src_c;
	unsigned char	*dst_c;
	size_t			i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	if (dst == src)
		return (dst);
	dst_c = (unsigned char *)dst;
	src_c = (unsigned char *)src;
	if (dst_c > src_c)
	{
		while (len-- > 0)
			dst_c[len] = src_c[len];
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (dst_c);
}
