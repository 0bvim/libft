/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivicius <nivicius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 17:06:02 by vde-frei          #+#    #+#             */
/*   Updated: 2023/12/07 02:25:12 by nivicius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*new_str;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	new_str = (char *)ft_calloc((len1 + len2 + 1), sizeof(char));
	if (!new_str || !s1)
		return (NULL);
	ft_strlcpy(new_str, (char *)s1, len1 + 1);
	ft_strlcat(new_str, (char *)s2, len2 + len1 + 1);
	new_str[len1 + len2] = '\0';
	return (new_str);
}
