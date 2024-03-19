/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:49:00 by vde-frei          #+#    #+#             */
/*   Updated: 2024/03/18 22:28:04 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strrchr(const char *s, int c)
{
	int				index;
	unsigned char	*string;

	string = (unsigned char *)s;
	index = ft_strlen(s);
	while (index)
	{
		if (string[index] == (unsigned char)c)
			return ((char *)(string + index));
		--index;
	}
	if (string[index] == (unsigned char)c)
		return ((char *)(string + index));
	return (NULL);
}
