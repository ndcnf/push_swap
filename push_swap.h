/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 14:08:36 by nchennaf          #+#    #+#             */
/*   Updated: 2022/05/20 08:38:53 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./Libft/libft.h"
# include "./ft_printf/ft_printf.h"

# define ERROR "Error\n"
# define ERR_ARG "Erreur d'arguments\n"
# define ERR_MLC "Erreur d'attribution de la memoire\n"
# define ERR_INT "Seuls les nombres entiers sont acceptes\n"
# define ERR_SZE "Ces nombres ne sont pas geres par le programme\n"
# define ERR_DPL "Il y a des doublons dans les nombres entres\n"
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
	long	*idx;
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
	long	*ord;
	//long	*idx;
}	t_data;

//error.c
void	errorminator(char *s);
void	only_int(t_data *d, char *argv[]);
void	no_doppelganger(t_data *d);
void	already_sorted(t_data *d);

//init.c
void	the_allocator(t_data *d);
void	init_stacks(t_data *d);
void	pop_stack_a(t_data *d, int argc, char *argv[]);

//inputs.c
void	one_string(t_data *d, char *argv[]);
void	every_arg_counts(t_data *d, int argc, char *argv[]);
void	the_swapper(t_data *d, int i, int j);
void	the_sorter(t_data *d);
void	nbr_to_index(t_data *d);

//push_swap.c
long	ft_atol(const char *str);

//algo.c
void	radix(t_data *d);
void	the_bitshifter(t_data *d);

//swap.c
void	sa(t_data *d);
void	sb(t_data *d);
void	ss(t_data *d);

//push.c
void	pa(t_data *d);
void	pb(t_data *d);

//rotate.c
void	ra(t_data *d);
void	rb(t_data *d);
void	rr(t_data *d);

//reverse_rotate.c
void	rra(t_data *d);
void	rrb(t_data *d);
void	rrr(t_data *d);

void	check_moi_ca_stp(t_data *d);
//SUPPRIMER QUAND PLUS BESOIN DE VERIFIER LES OPERATIONS

#endif
