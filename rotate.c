/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:25:52 by nchennaf          #+#    #+#             */
/*   Updated: 2022/05/20 16:07:40 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_data *d)
{
	int	tempura_v;
	int	tempura_i;

	d->a->i = 0;
	tempura_i = d->a->idx[0];
	tempura_v = d->a->v[0];
	while (d->a->i < d->a->nbr - 1)
	{
		d->a->idx[d->a->i] = d->a->idx[d->a->i + 1];
		d->a->v[d->a->i] = d->a->v[d->a->i + 1];
		d->a->i++;
	}
	d->a->idx[d->a->nbr - 1] = tempura_i;
	d->a->v[d->a->nbr - 1] = tempura_v;
	ft_printf("ra\n");
}

void	rb(t_data *d)
{
	int	tempura_v;
	int	tempura_i;

	d->b->i = 0;
	tempura_v = d->b->v[0];
	tempura_i = d->b->idx[0];
	while (d->b->i < d->b->nbr - 1)
	{
		d->b->idx[d->b->i] = d->b->idx[d->b->i + 1];
		d->b->v[d->b->i] = d->b->v[d->b->i + 1];
		d->b->i++;
	}
	d->b->v[d->b->nbr - 1] = tempura_v;
	d->b->idx[d->b->nbr - 1] = tempura_i;
	ft_printf("rb\n");
}

void	rr(t_data *d)
{
	ra(d);
	rb(d);
	ft_printf("rr\n");
}
