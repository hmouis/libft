/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:14:42 by hmouis            #+#    #+#             */
/*   Updated: 2024/10/25 11:15:38 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	unsigned char	*str;

	str = (unsigned char*)b;
	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = (unsigned char)c;
		i++;
	}
	return ((unsigned char *)b);
}

#include <stdio.h>
#include <string.h>

int main() {

    char buffer[50]; 
    memset(buffer, 5920,7);
   
    
    printf("%s\n", buffer);
    
    return 0;
}

