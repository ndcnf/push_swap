/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 18:09:04 by nchennaf          #+#    #+#             */
/*   Updated: 2022/04/20 19:13:55 by nchennaf         ###   ########.fr       */
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
	d->a->v = NULL;
	d->b->v = NULL;
	d->arg = 0;
}

void	pop_stack_a(t_data *d, char *argv[])
{
	if (argv[2] == NULL)
	{
		d->arg = 1;
		ft_printf("d-arg [%d]\n", d->arg);
	}
		ft_printf("a-arg2 [%d]\n", d->arg);
	if (d->arg == 0)
	{
		ft_printf("a-arg3 [%d]\n", d->arg);
		while (argv[d->a->i])
		{
			ft_printf("a-arg4 [%d]\n", d->arg);
			d->a->v[d->a->i] = (long)(argv[d->a->i]);
			d->a->nbr++;
			d->a->i++;
		}
	}
}
