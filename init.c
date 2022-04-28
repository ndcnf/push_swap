/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 18:09:04 by nchennaf          #+#    #+#             */
/*   Updated: 2022/04/28 17:26:39 by nchennaf         ###   ########.fr       */
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
		ft_printf("Une seule string ? type arg : %d\n", d->arg);
		one_string(d, argv);
	}
	ft_printf("type arg : %d\n", d->arg);
	if (d->arg == 0)
	{
		ft_printf("une reservation pour plusieurs donc.\n");
		every_arg_counts(d, argc, argv);
		ft_printf("tu segfaultes apres ?\n");
	}
}
