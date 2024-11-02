/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 22:41:57 by hmouis            #+#    #+#             */
/*   Updated: 2024/11/02 11:27:45 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  count_words(char const *s, char c)
{
    size_t  i;
    int     remainder;
    size_t  count;

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

char  *ft_strdup(const char *s1, char c,size_t index)
{
    size_t  i;
    char    *arr;
    size_t  s1_len;

    s1_len = 0;
    while (s1[index + s1_len] != c && s1[index + s1_len] != '\0')
    {
        s1_len++;
    }
    i = 0;
    arr = malloc(sizeof(char) * (s1_len + 1));
    if (arr == NULL)
    {
        free (arr);
        return (NULL);
    }
    while (s1_len > 0)
    {
        arr[i] = s1[index];
        i++;
        index++;
        s1_len--;
    }
    arr[i] = '\0';
    return (arr);
}

char **ft_split(char const *s, char c)
{
    size_t  i;
    char **arr;
    size_t count;
    size_t words;

    count = count_words(s,c);
    words = 0;
    i = 0;
    arr = malloc(sizeof(char *) * (count + 1));
    while (s[i] != '\0')
    {
        while (s[i] == c && s[i] != '\0')
            i++;
        if (s[i] != '\0')
        {
            arr[words] = ft_strdup(s,c,i);
            words++;
        }
        while (s[i] != c && s[i] != '\0')
            i++;
        i++;
    }
    arr[words] = NULL;
    return (arr);
}
/*

#include <stdio.h>
int main()
{
    char const *s = "  elo zzzfff zss";
    
    char **vv = ft_split(s,'z');
    for (int i = 0; vv[i] != NULL;i++ )
    {
        printf("%s\n",vv[i]);
    }
    return (0);
}
*/