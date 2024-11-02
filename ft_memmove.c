/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:22:14 by hmouis            #+#    #+#             */
/*   Updated: 2024/10/25 11:06:33 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*src_c;
	unsigned char	*dst_c;
	size_t	i;

	i = 0;
	dst_c = (unsigned char *)dst;
	src_c = (unsigned char *)src;
	if (dst_c > src_c)
	{
		while (len > 0)
		{
			dst_c[len - 1] = src_c[len - 1];
			len--;
		}
	}
	else
	{
		while (i < len)
		{
			dst_c[i] = src_c[i];
			i++;
		}
	}
	return (dst_c);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	//char dest[] = "hello world";
	int dest[3] ={1,244,2141};

	//char src[] = "zzzzzz";
	
	int src[3] ={2,2,12312};
	//int *dlhm = memmove(dest,src,10);
	int *dyln = ft_memmove(dest,src,10);
	for (int i = 0; i < 3;i++)
	{
		printf("%d\n",dyln[i]);
	}
	return (0);
}*/
