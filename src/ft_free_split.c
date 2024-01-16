/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivicius <nivicius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:10:38 by vde-frei          #+#    #+#             */
/*   Updated: 2023/12/07 02:15:21 by nivicius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	free_content(char **splited, int count)
{
	if (!*splited)
		return ;
	free_content(splited + 1, ++count);
	free(*splited);
	*splited = NULL;
	--count;
	if (splited && count == 1)
		free(splited);
}
