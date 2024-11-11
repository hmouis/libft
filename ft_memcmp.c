/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:51:40 by hmouis            #+#    #+#             */
/*   Updated: 2024/11/04 17:50:00 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ss1[i] == ss2[i])
			i++;
		else
			return (ss1[i] - ss2[i]);
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char s[] = "abcdefgh";
	char d[] = "abcdeA";
	int f = memcmp(s,d,6);
	printf("%d\n",f);
	return (0);
}*/
