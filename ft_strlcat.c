/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:24:43 by hmouis            #+#    #+#             */
/*   Updated: 2024/10/30 11:22:14 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	dst_len = strlen(dst);
	src_len = strlen(src);
	i = 0;
	if (dst_len >= dstsize)
		return (src_len + dstsize);
	while (src[i] != '\0' && dst_len + i < dstsize - 1 && dst_len < dstsize)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*

#include <stdio.h>


int main()
{
	char dst[50] = "";
	char dstt[50] = "";
	char src[] = "ds";

	int d = strlcat(dst,src,2);
	int fd = ft_strlcat(dstt,src,2);

	printf("%d\n",d);
	printf("%s\n",dst);
	printf("----------------------\n");
	printf("%d\n",fd);
	printf("%s\n",dstt);
	return (0);

}
*/
