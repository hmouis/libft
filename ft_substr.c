/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:46:41 by hmouis            #+#    #+#             */
/*   Updated: 2024/10/30 12:20:29 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;

	i = ft_strlen(s);
	if (start + len > i)
	{
		substring = (char *)malloc(sizeof(char) * ((i - start) + 1));
		if (substring == NULL)
			return (NULL);
	}
	else if (start + len <= i)
	{
		substring = (char *)malloc(sizeof(char) * len);
		if (substring == NULL)
			return (NULL);
	}
	i = 0;
	while (s[i] != '\0' && start + i < len - 1)
	{
		substring[i] = s[(start - 1) + i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}
/*


#include <stdio.h>


int main()
{
    char s[] = "hello world";
    char *a = ft_substr(s,4,15);
    printf("%s\n", a);
    return (0);
}
*/
