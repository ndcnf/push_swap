/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 15:35:19 by nchennaf          #+#    #+#             */
/*   Updated: 2022/05/02 18:04:25 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_data *d)
{
	int	tempura;

	tempura = 0;
	d->b->i = 0;
	ft_printf("pa %d\n", d->b->v);
	if (d->b->nbr > 0)
	{
		tempura = d->a->v[0];
		d->a->v[0] = d->b->v[0];
		d->b->v[0] = tempura;
		d->a->nbr++;
		d->b->nbr--;
	}
	else
		ft_printf("b is feeling empty, doesn't want to go anywhere\n");
}

void	pb(t_data *d)
{
	int	tempura;

	tempura = 0;
	d->a->i = 0;
	ft_printf("nbr b %d\n", d->b->nbr);
	ft_printf("nbr a %d\n", d->a->nbr);
	if (d->a->nbr > 0)
	{
		tempura = d->b->v[0];
		d->b->v[0] = d->a->v[0];
		d->a->v[0] = tempura;
		d->a->nbr--;
		d->b->nbr++;
		ft_printf("nbr b apres %d\n", d->b->nbr);
		ft_printf("nbr a apres %d\n", d->a->nbr);
	}
	else
		ft_printf("a is feeling empty, doesn't want to go anywhere\n");
}