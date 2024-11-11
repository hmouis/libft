/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 12:18:41 by hmouis            #+#    #+#             */
/*   Updated: 2024/11/07 12:43:54 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count(long n)
{
	size_t	n_len;

	n_len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n_len++;
		n *= -1;
	}
	while (n > 0)
	{
		n_len++;
		n /= 10;
	}
	return (n_len);
}

char	*ft_itoa(int n)
{
	long	nbr;
	size_t	n_len;
	char	*arr;

	nbr = n;
	n_len = count(nbr);
	arr = malloc(sizeof(char) * n_len + 1);
	if (arr == NULL)
		return (NULL);
	if (nbr < 0)
	{
		nbr *= -1;
		arr[0] = '-';
	}
	arr[n_len] = '\0';
	if (nbr == 0)
		arr[0] = '0';
	while (nbr > 0)
	{
		arr[(n_len--) - 1] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (arr);
}
