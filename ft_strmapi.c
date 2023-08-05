/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 15:41:19 by vde-frei          #+#    #+#             */
/*   Updated: 2023/08/05 16:45:46 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*map_return;
	int		index;

	map_return = (char *)ft_calloc(ft_strlen(s) + 1, sizeof(char));
	index = 0;
	if (!map_return)
		return (NULL);
	while (s[index] != '\0')
	{
		if (f)
		{
			map_return[index] = f(index, s[index]);
			index++;
		}
		else
			return (NULL);
	}
	return (map_return);
}
