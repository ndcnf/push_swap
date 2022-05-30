/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:00:20 by nchennaf          #+#    #+#             */
/*   Updated: 2022/05/23 20:35:12 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_max(t_data *d)
{
	int	max;
	int	i;

	i = 0;
	max = d->a->nbr - 1;
	while ((max >> i) != 1)
		i++;
	while (max >> i)
		i++;
	max = i;
	return (max);
}

void	radix(t_data *d)
{
	int	i;
	int	j;
	int	max;

	max = get_max(d);
	i = 0;
	while (i < max)
	{
		j = d->a->nbr;
		while (j > 0)
		{
			if ((d->a->idx[0] >> i) & 1)
				ra(d);
			else
				pb(d);
			j--;
		}
		while (d->b->nbr)
		{
			pa(d);
		}
		i++;
	}
}
