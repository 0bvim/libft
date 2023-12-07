/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivicius <nivicius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 15:41:19 by vde-frei          #+#    #+#             */
/*   Updated: 2023/12/07 02:20:18 by nivicius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
