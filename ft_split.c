/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 19:44:39 by vde-frei          #+#    #+#             */
/*   Updated: 2023/08/03 23:04:49 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int		num_tokens;
	char	**tokens;
	char	*token;
	char	*next_token;

	tokens = ft_calloc(sizeof(char **), ft_strlen(s) + 1);
	if (!tokens)
		return (NULL);
	num_tokens = 0;
	token = (char *)s;
	next_token = ft_strchr(token, c);
	while (next_token != NULL)
	{
		*next_token = '\0';
		tokens[num_tokens] = token;
		num_tokens++;
		token = next_token + 1;
		next_token = ft_strchr(token, c);
	}
	tokens[num_tokens++] = token;
	return (tokens);
}
