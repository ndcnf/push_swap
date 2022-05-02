/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 14:12:35 by nchennaf          #+#    #+#             */
/*   Updated: 2022/05/02 15:33:40 by nchennaf         ###   ########.fr       */
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
		//free(tempura);
		printf("sa\n");
		//return ("sa");
	}
	//return (ft_strdup(""));
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
		//free(tempura)
		printf("sb\n");
		//return ("sb");
	}
	//return (ft_strdup(""));
}

void	ss(t_data *d)
{
	sa(d);
	sb(d);
	printf("ss\n");
}
