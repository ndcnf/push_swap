/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:00:20 by nchennaf          #+#    #+#             */
/*   Updated: 2022/05/17 15:10:04 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix(t_data *d)
{
	int	max;
	int	i;

	i = 0;
	max = d->a->nbr - 1;
	while ((d->ord[max] >> i) != 1)
		i++;
	max = i + 1;
	ft_printf("max : %d\n", max);
	i = 0;
	while (max)
	{
		//if (d->ord[i])
		max--;
	}
}

void	the_bitshifter(t_data *d)
{
	int	i;
	int	bitshifted;

	i = 0;
	bitshifted = d->a->v[i];
	//ft_printf("[%d] 8&13 = 8?[%d]\n", bitshifted, 8&13);
	radix(d);
}
