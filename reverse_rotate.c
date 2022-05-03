/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:50:36 by nchennaf          #+#    #+#             */
/*   Updated: 2022/05/03 17:03:50 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_data *d)
{
	int	tempura;

	d->a->i = d->a->nbr - 1;
	tempura = d->a->v[d->a->i];
	while (d->a->i > 0)
	{
		d->a->v[d->a->i] = d->a->v[d->a->i - 1];
		d->a->i--;
	}
	d->a->v[0] = tempura;
	ft_printf("rra\n");
	check_moi_ca_stp(d);
}

void	rrb(t_data *d)
{
	int	tempura;

	d->b->i = d->b->nbr - 1;
	tempura = d->b->v[d->b->i];
	while (d->b->i > 0)
	{
		d->b->v[d->b->i] = d->b->v[d->b->i - 1];
		d->b->i--;
	}
	d->b->v[0] = tempura;
	ft_printf("rrb\n");
	check_moi_ca_stp(d);
}

void	rrr(t_data *d)
{
	rra(d);
	rrb(d);
	ft_printf("rrr\n");
	check_moi_ca_stp(d);
}
