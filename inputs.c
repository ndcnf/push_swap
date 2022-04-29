/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inputs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:39:55 by nchennaf          #+#    #+#             */
/*   Updated: 2022/04/29 22:05:14 by nchennaf         ###   ########.fr       */
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
	while (i <= lenny)
	{
		if (argv[1][i] == ' ')
			d->a->nbr++;
		i++;
	}
	d->a->nbr++;
	lenny = d->a->nbr;
	d->a->v = malloc(sizeof(long *) * lenny);
	if (!d->a->v)
		return ;
	while (d->a->i < lenny)
	{
		if (ft_atol(ft_split(argv[1], ' ')[d->a->i]) < MIN_INT || ft_atol(ft_split(argv[1], ' ')[d->a->i]) > MAX_INT)
			errorminator(ERR_SZE);
		d->a->v[d->a->i] = ft_atoi(ft_split(argv[1], ' ')[d->a->i]);
		d->a->i++;
	}
}

void	every_arg_counts(t_data *d, int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	d->a->nbr = argc - 1;
	d->arg = 0;
	d->a->i = 0;
	d->a->v = malloc(sizeof(long *) * d->a->nbr);
	if (!d->a->v)
		return ;
	while (i <= d->a->nbr)
	{
		if (ft_atol(argv[i]) < MIN_INT || ft_atol(argv[i]) > MAX_INT)
			errorminator(ERR_SZE);
		d->a->v[d->a->i] = ft_atoi(argv[i]);
		i++;
		d->a->i++;
	}
}
