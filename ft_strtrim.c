/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:24:46 by hmouis            #+#    #+#             */
/*   Updated: 2024/11/11 17:24:49 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	check_c(char c, char const *str)
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

static char	*ft_superrdup(const char *s1, size_t start, size_t end)
{
	size_t	i;
	char	*arr;

	i = 0;
	arr = (char *)malloc(sizeof(char) * ((end - start) + 1));
	if (arr == NULL)
		return (NULL);
	while (s1[start] != '\0' && start < end)
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

	if (!s1 || !set)
		return (NULL);
	if (s1[0] == '\0')
		return (ft_strdup(""));
	i = 0;
	start = 0;
	s1_len = ft_strlen(s1);
	end = s1_len;
	while (check_c(s1[start], set) == 1 && start < end)
		start++;
	while (check_c(s1[end - 1], set) == 1 && end > start)
		end--;
	trm_str = ft_superrdup(s1, start, end);
	return (trm_str);
}
