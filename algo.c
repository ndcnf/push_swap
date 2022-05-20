/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:00:20 by nchennaf          #+#    #+#             */
/*   Updated: 2022/05/20 09:58:45 by nchennaf         ###   ########.fr       */
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
	int	max;

	max = get_max(d);
	i = 0;
	ft_printf("MAX %d\n", get_max(d));
	while (already_sorted(d) && i < max)
	{
		while ()
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
