/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 14:12:35 by nchennaf          #+#    #+#             */
/*   Updated: 2022/05/20 09:33:58 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_data *d)
{
	int	tempura_v;
	int	tempura_i;

	if (d->a->nbr > 1)
	{
		tempura_v = (int)d->a->v[0];
		tempura_i = (int)d->a->idx[0];
		d->a->v[0] = d->a->v[1];
		d->a->idx[0] = d->a->idx[1];
		d->a->v[1] = tempura_v;
		d->a->idx[1] = tempura_i;
		printf("sa\n");
	}
}

void	sb(t_data *d)
{
	int	tempura;

	tempura = 0;
	if (d->b->nbr > 1)
	{
		tempura = (int)d->b->v[0];
		d->b->v[0] = d->b->v[1];
		d->b->v[1] = tempura;
		printf("sb\n");
	}
	//check_moi_ca_stp(d);
}

void	ss(t_data *d)
{
	sa(d);
	sb(d);
	printf("ss\n");
	//check_moi_ca_stp(d);
}
