/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 18:09:04 by nchennaf          #+#    #+#             */
/*   Updated: 2022/05/20 15:40:00 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	the_allocator(t_data *d)
{
	d->a = malloc(sizeof(t_stack));
	if (!d->a)
		errorminator(ERR_MLC);
	d->b = malloc(sizeof(t_stack));
	if (!d->b)
		errorminator(ERR_MLC);
}

void	count_on_me(t_data *d)
{
	int	lenny;

	lenny = d->a->nbr;
	d->a->v = ft_calloc(lenny, sizeof(long *));
	d->b->v = ft_calloc(lenny, sizeof(long *));
	d->a->idx = ft_calloc(lenny, sizeof(long *));
	d->b->idx = ft_calloc(lenny, sizeof(long *));
}

void	init_stacks(t_data *d)
{
	d->a->i = 0;
	d->b->i = 0;
	d->a->nbr = 0;
	d->b->nbr = 0;
	d->arg = 0;
}

void	pop_stack_a(t_data *d, int argc, char *argv[])
{
	if (argv[2] == NULL)
	{
		d->arg = 1;
		only_int(d, argv);
		one_string(d, argv);
	}
	if (d->arg == 0)
	{
		only_int(d, argv);
		every_arg_counts(d, argc, argv);
	}
}
