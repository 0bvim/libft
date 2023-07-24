/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:04:01 by vde-frei          #+#    #+#             */
/*   Updated: 2023/07/24 15:58:02 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;

	if (!src)
		return (ft_strlen(dst));
	if (!dst)
		return (ft_strlen(src));
	i = -1;
	while (*(src + ++i) && (ft_strlen(dst) + i + 1) < --size)
		*(dst + ft_strlen(dst) + 1) = *(src + i);
	*(dst + ft_strlen(dst) + i) = '\0';
	if (size < ft_strlen(dst))
		return (ft_strlen(src) + size);
	else
		return (ft_strlen(src) + ft_strlen(dst));
}
