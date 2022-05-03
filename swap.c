/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 14:12:35 by nchennaf          #+#    #+#             */
/*   Updated: 2022/05/03 17:05:55 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_data *d)
{
	int	tempura;

	tempura = 0;
	if (d->a->nbr > 1)
	{
		tempura = (int)d->a->v[0];
		d->a->v[0] = d->a->v[1];
		d->a->v[1] = tempura;
		printf("sa\n");
	}
	check_moi_ca_stp(d);
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
	check_moi_ca_stp(d);
}

void	ss(t_data *d)
{
	sa(d);
	sb(d);
	printf("ss\n");
	check_moi_ca_stp(d);
}
