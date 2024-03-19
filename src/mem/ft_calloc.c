/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 19:52:09 by vde-frei          #+#    #+#             */
/*   Updated: 2024/03/18 22:16:47 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	result;

	ptr = NULL;
	result = nmemb * size;
	if (!nmemb || !size || nmemb == result / size)
		ptr = malloc (result);
	if (ptr)
		ft_bzero(ptr, result);
	return (ptr);
}
