/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 15:35:19 by nchennaf          #+#    #+#             */
/*   Updated: 2022/05/03 10:42:50 by nchennaf         ###   ########.fr       */
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
	d->b->i = d->b->nbr;
	d->b->v[0] = 27; // valeur de test pour ne pas avoir 0, supprimer ensuite
	d->b->nbr = 1; // valeur de test pour etre en coherence avec la ligne ci-dessus
	ft_printf("nbr b %d\n", d->b->nbr);
	ft_printf("nbr a %d\n", d->a->nbr);
	if (d->a->nbr > 0)
	{
		tempura = d->b->v[0];
		d->b->v[0] = d->a->v[0];
		ft_printf("ben alors ? %d\n", d->a->v[0]);
		while (d->a->i < d->a->nbr)
		{
			//d->a->v[d->a->i + 1] = d->a->v[d->a->i];
			// utiliser la tempura, mais reflechir a l'ordre
			// idealement finir une stack avant de s'occuper de l'autre
			// principe des trois jarres pour deplacer l'index
			// reiterer pour l'autre stack pour eviter les pertes de donnees
			d->a->i = d->a->i--;
			ft_printf("kestufay %d[%d]\n", d->a->v[d->a->i], d->a->i);
			d->a->i++;
		}
		d->b->v[d->b->i + 1] = tempura;
		tempura = d->b->v[d->b->i + 1];
		ft_printf("no tempura ? %d [%d]\n", d->b->v[d->b->i], tempura);
		d->a->nbr--;
		d->b->nbr++;
		ft_printf("nbr b apres %d\n", d->b->nbr);
		ft_printf("nbr a apres %d\n", d->a->nbr);
	}
	else
		ft_printf("a is feeling empty, doesn't want to go anywhere\n");
}