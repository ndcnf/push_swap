/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 14:08:24 by nchennaf          #+#    #+#             */
/*   Updated: 2022/05/20 09:05:15 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_moi_ca_stp(t_data *d)
{
	d->a->i = 0;

	ft_printf("\n|-----[STACK A]-----|\n");
	while (d->a->i < d->a->nbr)
		ft_printf("[%d] v{%d} idx{%d}\n", d->a->i, d->a->v[d->a->i], d->a->idx[d->a->i++]);
	
	d->b->i = 0;

	ft_printf("\n|-----[STACK B]-----|\n");
	while (d->b->i < d->b->nbr)
		ft_printf("[%d] v{%d} idx{%d}\n", d->b->i, d->b->v[d->b->i], d->b->idx[d->b->i++]);
}

long	ft_atol(const char *str)
{
	int		i;
	int		sign;
	long	value;

	sign = 1;
	i = 0;
	value = 0;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == ' ' || \
			str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	if (str[i] >= '0' && str[i] <= '9')
	{
		value = str[i] - '0';
		while (str[++i] >= '0' && str[i] <= '9' && str[i] != '\0')
			value = (value * 10) + (str[i] - '0');
	}
	return (value * sign);
}

int	main(int argc, char *argv[])
{
	t_data	d;

	the_allocator(&d);
	init_stacks(&d);
	if (argc < 2)
		return (EXIT_SUCCESS);
	pop_stack_a(&d, argc, argv);
	nbr_to_index(&d);
	no_doppelganger(&d);
	the_bitshifter(&d);
	already_sorted(&d);
	return (EXIT_SUCCESS);
}
