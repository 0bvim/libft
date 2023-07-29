/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 21:02:23 by vde-frei          #+#    #+#             */
/*   Updated: 2023/07/29 03:47:23 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*string;
	char	*tofind;
	size_t	tf_len;

	string = (char *)big;
	tofind = (char *)little;
	tf_len = ft_strlen(tofind);
	if (!tofind)
		return (string);
	while (len-- && *tofind != '\0')
	{
		if (*tofind == *string)
		{
			tofind++;
			string++;
		}
		else
			string++;
	}
	if (*tofind == '\0' && (*string || *string == '\0'))
		return (string - tf_len);
	else
		return (NULL);
}
