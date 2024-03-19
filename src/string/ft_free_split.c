/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivicius <nivicius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:10:38 by vde-frei          #+#    #+#             */
/*   Updated: 2024/03/18 22:24:30 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

void	free_content(char **splited, int count)
{
	if (!*splited)
		return ;
	free_content(splited + 1, ++count);
	free(*splited);
	*splited = NULL;
	if (splited && --count == 1)
		free(splited);
}
