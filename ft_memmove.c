/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 17:38:35 by vde-frei          #+#    #+#             */
/*   Updated: 2023/07/23 18:52:39 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest || !src || n == 0)
		return (dest);
	if (dest < src)
		ft_memcpy(dest, src, n);
	if (dest > src)
		while (n--)
			*(((char *)dest) + n) = *(((char *)src) + n);
	return (dest);
}
