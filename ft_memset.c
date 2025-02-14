/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:14:42 by hmouis            #+#    #+#             */
/*   Updated: 2024/11/12 13:31:13 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = (unsigned char)c;
		i++;
	}
	return ((unsigned char *)b);
}











#include <stdio.h>
int main()
{
    int a = -2147483648;
    int b;
    char *c = (char *)&a;
    char *d = (char *)&b;

    
    ft_memset(&d[0], c[0],1 );
    ft_memset(&d[1], c[1],1 );
    ft_memset(&d[2], c[2],1 );
    ft_memset(&d[3], c[3],1 );

    printf("%d\n",b);
}














