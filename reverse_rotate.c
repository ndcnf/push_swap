/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:50:36 by nchennaf          #+#    #+#             */
/*   Updated: 2022/05/23 20:39:40 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_data *d)
{
	int	tempura_v;
	int	tempura_i;

	d->a->i = d->a->nbr - 1;
	tempura_v = d->a->v[d->a->i];
	tempura_i = d->a->idx[d->a->i];
	while (d->a->i > 0)
	{
		d->a->v[d->a->i] = d->a->v[d->a->i - 1];
		d->a->idx[d->a->i] = d->a->idx[d->a->i - 1];
		d->a->i--;
	}
	d->a->v[0] = tempura_v;
	d->a->idx[0] = tempura_i;
	ft_printf("rra\n");
}

void	rrb(t_data *d)
{
	int	tempura_v;
	int	tempura_i;

	d->b->i = d->b->nbr - 1;
	tempura_v = d->b->v[d->b->i];
	tempura_i = d->b->idx[d->b->i];
	while (d->b->i > 0)
	{
		d->b->v[d->b->i] = d->b->v[d->b->i - 1];
		d->b->idx[d->b->i] = d->b->idx[d->b->i - 1];
		d->b->i--;
	}
	d->b->v[0] = tempura_v;
	d->b->idx[0] = tempura_i;
	ft_printf("rrb\n");
}

void	rrr(t_data *d)
{
	rra(d);
	rrb(d);
	ft_printf("rrr\n");
}
