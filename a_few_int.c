/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_few_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 16:08:36 by nchennaf          #+#    #+#             */
/*   Updated: 2022/05/24 17:11:35 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	how_many(t_data *d)
{
	if (d->a->nbr == 2)
		only_two(d);
	else if (d->a->nbr == 3)
		only_three(d);
	else if (d->a->nbr == 4)
		only_four(d);
	else if (d->a->nbr == 5)
		only_five(d);
	else
		radix(d);
}

void	only_two(t_data *d)
{
	sa(d);
}

void	only_three(t_data *d)
{
	int	f;
	int	s;
	int	t;

	f = d->a->idx[0];
	s = d->a->idx[1];
	t = d->a->idx[2];
	if (f > s && f < t && s < t)
		sa(d);
	else if (f > s && s > t && t < f)
	{
		sa(d);
		rra(d);
	}
	else if (s < t && s < f && f > t)
		ra(d);
	else if (f < s && f < t && s > t)
	{
		sa(d);
		ra(d);
	}
	else if (f < s && s > t && t < f)
		rra(d);
}

void	only_four(t_data *d)
{
	while (d->b->nbr < 1)
	{
		while (d->a->idx[0] != 3)
			ra(d);
		pb(d);
	}
	only_three(d);
	pa(d);
	ra(d);
}

void	only_five(t_data *d)
{
	while (d->b->nbr < 2)
	{
		while (d->a->idx[0] < 3)
			ra(d);
		pb(d);
	}
	if (d->b->idx[0] < d->b->idx[1])
		sb(d);
	only_three(d);
	pa(d);
	pa(d);
	ra(d);
	ra(d);
}
