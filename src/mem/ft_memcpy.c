/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 17:34:37 by vde-frei          #+#    #+#             */
/*   Updated: 2024/03/18 22:24:10 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*cpysrc;
	char	*cpydest;
	size_t	i;

	if (!dest && !src)
		return (NULL);
	cpysrc = (char *)src;
	cpydest = (char *)dest;
	i = 0;
	while (i < n)
	{
		*(cpydest + i) = *(cpysrc + i);
		i++;
	}
	return (dest);
}
