/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inputs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:39:55 by nchennaf          #+#    #+#             */
/*   Updated: 2022/05/10 17:26:15 by nchennaf         ###   ########.fr       */
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
	d->a->v = ft_calloc(lenny, sizeof(long *));
	d->b->v = ft_calloc(lenny, sizeof(long *));
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
	d->a->v = ft_calloc(d->a->nbr, sizeof(long *));
	d->b->v = ft_calloc(d->a->nbr, sizeof(long *));
	while (i <= d->a->nbr)
	{
		if (ft_atol(argv[i]) < MIN_INT || ft_atol(argv[i]) > MAX_INT)
			errorminator(ERR_SZE);
		d->a->v[d->a->i] = ft_atoi(argv[i]);
		i++;
		d->a->i++;
	}
}

void	the_swapper(t_data *d)
{
	int	tempura;

	tempura = d->o->ord[d->o->i];
	d->o->ord[d->o->i] = d->o->ord[d->o->j];
	d->o->ord[d->o->j] = tempura;
}

void	nbr_to_index(t_data *d)
{
	//int		i;
	//int		j;
	int		nbr;
	//long	*order;

	//i = 0;
	//j = 0;
	nbr = d->a->nbr;
	//d->a->i = 0;
	order = ft_calloc(d->a->nbr, sizeof(long *));
	while (d->o->i < nbr)
		order[d->o->i] = d->a->v[d->o->i++];
	d->o->i = 0;
	while (d->o->i < nbr)
	{
		while (d->o->j < nbr)
		{
			if (order[d->o->i] > order[d->o->j])
				the_swapper(d);
			j++;
		}
		i++;
		j = i + 1;
	}
}