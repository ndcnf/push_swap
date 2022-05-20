/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:00:20 by nchennaf          #+#    #+#             */
/*   Updated: 2022/05/20 09:22:58 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix(t_data *d)
{
	check_moi_ca_stp(d);
	pb(d);
	pb(d);
	pb(d);
	check_moi_ca_stp(d);
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
