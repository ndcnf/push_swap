/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 15:35:19 by nchennaf          #+#    #+#             */
/*   Updated: 2022/05/02 17:06:59 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_data *d)
{
	int	tempura;

	tempura = 0;
	d->b->i = 0;
	if (!d->b->v[d->b->i])
	{
		tempura = d->a->v[0];
		d->a->v[0] = d->b->v[0];
		d->b->v[0] = tempura;
	}
	ft_printf("b is feeling empty, doesn't want to go anywhere\n");
}

void	pb(t_data *d)
{
	int	tempura;

	tempura = 0;
	d->a->i = 0;
	ft_printf("pb %d\n", d->a->v[d->a->i]); //attention ici b et non 'a' de verifie
	if (!d->a->v[d->a->i])
	{
		tempura = d->b->v[0];
		d->b->v[0] = d->a->v[0];
		d->a->v[0] = tempura;
	}
	ft_printf("a is feeling empty, doesn't want to go anywhere\n");
}