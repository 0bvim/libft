/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 14:18:58 by vde-frei          #+#    #+#             */
/*   Updated: 2023/07/27 10:20:12 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	nb;

	sign = 0;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
		nptr++; 
	while (*nptr == '-' || *nptr == '+')
	{
		sign += 1;
		if (sign > 1)
			return (0);
		if (*nptr == '-')
			sign = -sign;
		nptr++;
	}
	nb = 0;
	while (*nptr >= '0' && *nptr <= '9')
	{
		nb *= 10;
		nb += *nptr - 48;
		nptr++;
	}
	nb *= sign;
	return (nb);
}
