/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivicius <nivicius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 15:41:19 by vde-frei          #+#    #+#             */
/*   Updated: 2024/03/18 22:27:43 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "../mem/ft_memory.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*map_return;
	int		index;

	map_return = (char *)ft_calloc(ft_strlen(s) + 1, sizeof(char));
	index = 0;
	if (!map_return || !f)
		return (NULL);
	while (s[index] != '\0')
	{
		map_return[index] = f(index, s[index]);
		index++;
	}
	return (map_return);
}
