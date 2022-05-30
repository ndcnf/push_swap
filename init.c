/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 18:09:04 by nchennaf          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/05/20 14:59:05 by nchennaf         ###   ########.fr       */
=======
/*   Updated: 2022/05/11 10:39:22 by nchennaf         ###   ########.fr       */
>>>>>>> parent of f03e17c (integers mngt fixed)
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

void	count_on_me(t_data *d, int argc, char *argv[])
{
	int	i;
	int	lenny;

	i = 0;
	d->a->i = 0;
	if (d->arg == 1)
	{
		lenny = ft_strlen(argv[1]);
		while (i <= lenny)
		{
			if (argv[1][i] == ' ')
				d->a->nbr++;
			i++;
		}
		d->a->nbr++;
	}
	else
	{
		lenny = argc - 1;
		ft_printf("lennou %d\n", lenny);
	}
	lenny = d->a->nbr;
	ft_printf("LENNY %d\n", lenny);
	d->a->v = ft_calloc(lenny, sizeof(long *));
	d->b->v = ft_calloc(lenny, sizeof(long *));
	d->a->idx = ft_calloc(lenny, sizeof(long *));
	d->b->idx = ft_calloc(lenny, sizeof(long *));
}

void	pop_stack_a(t_data *d, char *argv[])
{
	if (argv[2] == NULL)
	{
		d->arg = 1;
		only_int(d, argv);
		one_string(d, argv);
	}
	if (d->arg == 0)
<<<<<<< HEAD
	{
		only_int(d, argv);
		every_arg_counts(d, argv);
	}
=======
		every_arg_counts(d, argc, argv);
>>>>>>> parent of f03e17c (integers mngt fixed)
}
