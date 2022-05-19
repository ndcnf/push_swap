/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:25:52 by nchennaf          #+#    #+#             */
/*   Updated: 2022/05/19 17:51:22 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_data *d)
{
	int	tempura;

	d->a->i = 0;
	tempura = d->a->v[0];
	while (d->a->i < d->a->nbr)
	{
		d->a->v[d->a->i] = d->a->v[d->a->i + 1];
		d->a->i++;
	}
	d->a->v[d->a->nbr - 1] = tempura;
	ft_printf("ra\n");

/* 	d->a->i = 0;
	tempura = d->a->v[0];
	while (d->a->i < d->a->nbr)
	{
		d->a->v[d->a->i] = d->a->v[d->a->i + 1];
		d->a->i++;
	}
	d->a->v[d->a->nbr - 1] = tempura;
	ft_printf("ra\n"); */
	check_moi_ca_stp(d);
}

void	rb(t_data *d)
{
	int	tempura;

	d->b->i = 0;
	tempura = d->b->v[0];
	while (d->b->i < d->b->nbr)
	{
		d->b->v[d->b->i] = d->b->v[d->b->i + 1];
		d->b->i++;
	}
	d->b->v[d->b->nbr - 1] = tempura;
	ft_printf("rb\n");
	//check_moi_ca_stp(d);
}

void	rr(t_data *d)
{
	ra(d);
	rb(d);
	ft_printf("rr\n");
	//check_moi_ca_stp(d);
}
