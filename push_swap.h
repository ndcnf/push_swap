/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 14:08:36 by nchennaf          #+#    #+#             */
/*   Updated: 2022/04/19 14:28:10 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./Libft/libft.h"
# include "./ft_printf/ft_printf.h"

# define ERROR "Error\n"
# define ERR_ARG "Erreur d'arguments\n"
# define ERR_MLC "Erreur d'attribution de la memoire\n"
# define MIN_INT -2147483648
# define MAX_INT 2147483647

/********************************************************
* 'i' is for index										*
* 'nbr' is for the number of values entered				*
* 'v' is the value of each number						*
********************************************************/
typedef struct s_stack
{
	int		i;
	int		nbr;
	long	*v;
}	t_stack;

/********************************************************
* 'arg' values are as follows:							*
* 1 if the nbr entered are in a single string (one arg)	*
* 0 if each nbr is an argument (by default)				*
********************************************************/
typedef struct s_data
{
	t_stack	*a;
	t_stack	*b;
	int		arg;
}	t_data;

void	errorminator(char *s);
void	the_allocator(t_data *d);
void	init_stacks(t_data *d);
void	pop_stack_a(t_data *d, char *argv[]);
void	sa(t_data *d);

#endif
