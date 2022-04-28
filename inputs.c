/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inputs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:39:55 by nchennaf          #+#    #+#             */
/*   Updated: 2022/04/28 10:30:33 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	one_string(t_data *d, char *argv[])
{
	int	i;
	int	lenny;

	i = 0;
	d->a->i = 0;
	lenny = ft_strlen(argv[1]);
	while ((size_t)i <= ft_strlen(argv[1]))
	{
		if (argv[1][i] == ' ')
			d->a->nbr++;
		i++;
	}
	d->a->nbr++;
	lenny = d->a->nbr;
	i = 0;
	while (d->a->i < lenny)
	{
		d->a->v[d->a->i] = (long *)ft_split(argv[1], ' ')[i];
		i++;
		d->a->i++;
	}
}

void	every_arg_counts(t_data *d, int argc, char *argv[])
{
	(void)argc;
	(void)argv;
	d->arg = 0;
}
