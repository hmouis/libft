/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 12:15:31 by hmouis            #+#    #+#             */
/*   Updated: 2024/11/04 15:46:57 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*new;

	if (count > 0 && size > (size_t)-1 / count)
		return (NULL);
	new = malloc(size * count);
	if (new == NULL)
		return (NULL);
	ft_bzero(new, count * size);
	return (new);
}
