/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 14:12:35 by nchennaf          #+#    #+#             */
/*   Updated: 2022/04/19 13:33:15 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_data *d)
{
	int	tempura;

	tempura = 0;
	if (d->a->nbr > 2)
	{
		tempura = d->a->v[d->a->i-1];
		d->a->v[d->a->i-1] = d->a->v[d->a->i];
		d->a->v[d->a->i] = tempura;
	}
}
