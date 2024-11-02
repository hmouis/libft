/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 12:15:31 by hmouis            #+#    #+#             */
/*   Updated: 2024/11/02 12:18:29 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*new;

	new = malloc(size * count);
	if (new == NULL)
		return (NULL);
	ft_bzero(new, count);
	return (new);
}
/*

#include <stdio.h>

int main()
{
    char *i = ft_calloc(24515447859,sizeof(int));
    for (int ii = 0; ii < 14;ii++)
    {
        printf("%d\n",i[ii]);
    }
    return (0);
}
*/
