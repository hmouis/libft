/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:34:01 by hmouis            #+#    #+#             */
/*   Updated: 2024/10/30 11:45:44 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t	check_c(char c, char const *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_superdup(const char *s1, size_t start, size_t end)
{
	size_t	i;
	char	*arr;

	i = 0;
	arr = (char *)malloc(sizeof(char) * ((end - start) + 1));
	if (arr == NULL)
		return (NULL);
	while (s1[start] != '0' && start < end)
	{
		arr[i] = s1[start];
		start++;
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	s1_len;
	size_t	start;
	size_t	end;
	char	*trm_str;

	i = 0;
	start = 0;
	s1_len = ft_strlen(s1);
	end = s1_len;
	while (check_c(s1[start], set) == 1 && start < end)
		start++;
	while (check_c(s1[end - 1], set) == 1 && end > start)
		end--;
	trm_str = ft_superdup(s1, start, end);
	return (trm_str);
}
/*

#include <stdio.h>

int main()
{
    char s[] = "ababaaaMy name is Simonbbaaabba";
    char ss[] = "ab";

    char *sss = ft_strtrim(s,ss);
    printf("%s\n",sss);
    return (0);
}*/
