/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 22:41:57 by hmouis            #+#    #+#             */
/*   Updated: 2024/11/14 12:00:16 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	int		remainder;
	size_t	count;

	i = 0;
	count = 0;
	remainder = 1;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		while (s[i] != '\0' && s[i] != c)
		{
			remainder = 0;
			i++;
		}
		if (remainder == 0)
		{
			remainder = 1;
			count++;
		}
	}
	return (count);
}

static char	*ft_superdup(const char *s1, char c, size_t index)
{
	size_t	i;
	char	*arr;
	size_t	s1_len;

	s1_len = 0;
	while (s1[index + s1_len] != c && s1[index + s1_len] != '\0')
		s1_len++;
	i = 0;
	arr = malloc(sizeof(char) * (s1_len + 1));
	if (arr == NULL)
		return (NULL);
	while (s1_len > 0)
	{
		arr[i++] = s1[index++];
		s1_len--;
	}
	arr[i] = '\0';
	return (arr);
}

static void	free_all(char **arr, size_t words)
{
	size_t	i;

	i = 0;
	while (i <= words)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static char	**fill(const char *str, char c, char **arr, size_t count)
{
	size_t	i;
	size_t	words;
	size_t	s_len;

	words = 0;
	s_len = ft_strlen(str);
	i = 0;
	while (i < s_len && count > 0)
	{
		while (str[i] == c && i < s_len)
			i++;
		if (i < s_len && str[i] != c)
			arr[words++] = ft_superdup(str, c, i);
		if (arr[words - 1] == NULL)
		{
			free_all(arr, words - 1);
			return (NULL);
		}
		while (str[i] != c && i < s_len)
			i++;
	}
	arr[words] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**new_arr;
	size_t	count;

	if (!s)
		return (NULL);
	count = count_words(s, c);
	new_arr = malloc(sizeof(char *) * (count + 1));
	if (!new_arr)
		return (NULL);
	new_arr = fill(s, c, new_arr, count);
	return (new_arr);
}
