/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:21:22 by vde-frei          #+#    #+#             */
/*   Updated: 2023/08/15 14:27:03 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	**start;

	start = lst;
	while (*lst != NULL)
	{
		ft_lstdelone(*lst, del);
		*lst = (*lst)->next;
	}
	*start = NULL;
}
