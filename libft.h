/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:27:56 by vde-frei          #+#    #+#             */
/*   Updated: 2023/07/22 03:42:42 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

// Std Libs Headers
# include <stdlib.h>
# include <unistd.h>

// parse
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_atoi(const char *nptr);

// string
size_t	strlen(const char *str);
#endif
