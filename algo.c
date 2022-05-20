/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:00:20 by nchennaf          #+#    #+#             */
/*   Updated: 2022/05/20 10:24:07 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		get_max(t_data *d)
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
	while (i <= max)
	{
		j = d->a->nbr - 1;
		while (j > 0)
		{
			if ((d->a->idx[0] >> i)&1)
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




/* 	int	max;
	int	i;

	i = 0;
	max = d->a->nbr - 1;
	while ((max >> i) != 1)
		i++;
	while ((d->idx[max] >> i) != 1)
		i++;
	//max = i + 1;
	max = i;
	i = 0;
	// et la, hop, on va radixer au max
	while (max)
	{
		if (((d->a->idx[i] >> i)&1) != 1)
			pb(d);
		else
			ra(d);
		i++;
		max--;
	} */
}

void	the_bitshifter(t_data *d)
{
	int	i;
	int	bitshifted;

	i = 0;
	bitshifted = d->a->idx[i];
	radix(d);
}
