/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 20:38:27 by vde-frei          #+#    #+#             */
/*   Updated: 2024/01/31 22:36:13 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bool.h"

bool	ft_isprint(int c)
{
	return (!(c < 32 || c > 126));
}