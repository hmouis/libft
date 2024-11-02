/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:13:44 by hmouis            #+#    #+#             */
/*   Updated: 2024/10/30 11:20:30 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	s_len;
	char	*new;

	s_len = ft_strlen(s);
	new = malloc(sizeof(char) * (s_len + 1));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*

#include <stdio.h>

int main()
{
    char *s = "1heHeh hdahd";
    char (*d)(unsigned int, char);
    d = ff;
    char *a = ft_strmapi(s,d);
    
    printf("%s\n",a);
    return (0);




}*/
