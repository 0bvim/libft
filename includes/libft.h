/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:27:56 by vde-frei          #+#    #+#             */
/*   Updated: 2024/03/18 22:23:07 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/* Std Libs Headers */
# include <unistd.h>

/* Bonus TypeStruct */

typedef struct s_list	t_list;
struct	s_list
{
	void	*content;
	t_list	*next;
};

/* Mandatory Functions */
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(const char *nptr);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);

#endif
