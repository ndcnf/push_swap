/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 18:09:04 by nchennaf          #+#    #+#             */
/*   Updated: 2022/04/29 14:45:33 by nchennaf         ###   ########.fr       */
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
		ft_printf("Une seule string, ok.\n");
		one_string(d, argv);
		only_int(d, argv);
	}
	if (d->arg == 0)
	{
		ft_printf("Une reservation pour plusieurs donc.\n");
		every_arg_counts(d, argc, argv);
	}
}
