/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 14:08:36 by nchennaf          #+#    #+#             */
/*   Updated: 2022/04/19 11:43:04 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./Libft/libft.h"
# include "./ft_printf/ft_printf.h"

# define ERROR "Error\n"
# define ERR_ARG "Erreur d'arguments\n"
# define ERR_MLC "Erreur d'attribution de la memoire\n"

typedef struct s_stack
{
	int		i;
	int		nbr;
	long	*v;
}	t_stack;

typedef struct s_data
{
	t_stack	*a;
	t_stack	*b;

}	t_data;

void	errorminator(char *s);
void	the_allocator(t_data *stks);
void	init_stacks(t_data *stks);
void	sa(t_data *stks);

#endif
