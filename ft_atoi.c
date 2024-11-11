/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:30:29 by hmouis            #+#    #+#             */
/*   Updated: 2024/11/02 12:12:34 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c)
{
	if (c == '\t' || c == ' ' || c == '\n'
		|| c == '\v' || c == '\r' || c == '\f')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while (ft_isspace(str[i]) == 1)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
/*
#include <stdio.h>

#include <stdlib.h>

int main()
{
    char s[] = "-2147483649";
    char p[] = "-2147483649";
    
    int aa = atoi(s);
    int vv = ft_atoi(p);
    printf("%d------------>%d",aa,vv);
    
    return (0);
}*/
