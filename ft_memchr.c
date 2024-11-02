/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:18:13 by hmouis            #+#    #+#             */
/*   Updated: 2024/10/25 11:04:53 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*arr;

	i = 0;
	arr = (unsigned char *)s;
	while (i < n)
	{
		if (arr[i] == c)
			return (arr + i);
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char str[] = "hello llll";
	char c = 'e';
	
	
	char *s = ft_memchr(str,c,2);
	printf("%s\n",s);
	for (int i = 0;i < 2;i++)
	{
	
		printf("%d\n",s[i]);
	}
	return (0);
}*/
