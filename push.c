/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 15:35:19 by nchennaf          #+#    #+#             */
/*   Updated: 2022/05/03 14:00:08 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_data *d)
{
	d->b->i = 0;
	d->a->i = d->a->nbr;
	if (d->b->nbr > 0)
	{
		while (d->b->i > 0)
		{
			d->a->v[d->a->i] = d->a->v[d->a->i - 1];
			d->a->i--;
		}
		d->a->v[0] = d->a->v[0];
		d->a->nbr++;
		while (d->b->i < d->b->nbr)
		{
			d->b->v[d->b->i] = d->b->v[d->b->i + 1];
			d->b->i++;
		}
		d->b->nbr--;
	}
	else
		ft_printf("b is feeling empty, doesn't want to go anywhere\n");
}

void	pb(t_data *d)
{
	d->a->i = 0;
	d->b->i = d->b->nbr;
	if (d->a->nbr > 0)
	{
		while (d->b->i > 0)
		{
			d->b->v[d->b->i] = d->b->v[d->b->i - 1];
			d->b->i--;
		}
		d->b->v[0] = d->a->v[0];
		d->b->nbr++;
		while (d->a->i < d->a->nbr)
		{
			d->a->v[d->a->i] = d->a->v[d->a->i + 1];
			d->a->i++;
		}
		d->a->nbr--;
	}
	else
		ft_printf("a is feeling empty, doesn't want to go anywhere\n");
}
