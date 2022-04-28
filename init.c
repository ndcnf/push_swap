/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 18:09:04 by nchennaf          #+#    #+#             */
/*   Updated: 2022/04/28 09:52:46 by nchennaf         ###   ########.fr       */
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
	//d->a->v = {{0}};
	//d->b->v = {{0}};
	d->arg = 0;
}

void	pop_stack_a(t_data *d, char *argv[])
{
	if (argv[2] == NULL)
	{
		d->arg = 1;
		ft_printf("Une seule string ? type arg : %d\n", d->arg);
		one_string(d, argv);
	}
	ft_printf("Alors, une seule ? type arg : %d\n", d->arg);
	if (d->arg == 0)
	{
		//every_arg_counts();

/* 		ft_printf("arg = [%d]\n", d->arg);
		while (argv[d->a->i])
		{
			ft_printf("et la, l'arg est de... [%d]\n", d->arg);
			d->a->v[d->a->i] = (long)(argv[d->a->i])[i];
			d->a->nbr++;
			d->a->i++;
		} */
	}
}
