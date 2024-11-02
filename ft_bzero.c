/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:51:26 by hmouis            #+#    #+#             */
/*   Updated: 2024/10/30 16:10:28 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}

#include <strings.h>
#include <stdio.h>



int main()
{
	char s[] = "helooossd";
	 ft_bzero(s,5);
	 for (int  i = 0; i < sizeof(s);i++)
	 {
   		printf("%d\n",s[i]);

	 }
}
