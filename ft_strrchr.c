/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:37:39 by hmouis            #+#    #+#             */
/*   Updated: 2024/11/05 13:19:03 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	if ((char)c == '\0' && s[i] == '\0')
		return ((char *)s + i);
	while (i-- > 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
	}
	return (NULL);
}
