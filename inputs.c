/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inputs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:39:55 by nchennaf          #+#    #+#             */
/*   Updated: 2022/05/17 15:09:17 by nchennaf         ###   ########.fr       */
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
		if (ft_atol(ft_split(argv[1], ' ')[d->a->i]) < MIN_INT || \
		ft_atol(ft_split(argv[1], ' ')[d->a->i]) > MAX_INT)
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

void	the_swapper(t_data *d, int i, int j)
{
	int	tempura;

	tempura = d->ord[i]; //ok
	d->ord[i] = d->ord[j]; //ok
	d->ord[j] = tempura; //ok
}

void	nbr_to_index(t_data *d)
{
	int	nbr;
	int	i;
	int	j;

	i = 0;
	nbr = d->a->nbr;
	d->ord = ft_calloc(nbr, sizeof(long *));
	d->idx = ft_calloc(nbr, sizeof(long *));
	while (i < nbr)
	{
		d->ord[i] = d->a->v[i];
		i++;
	}
	i = 0;
	j = 0;
	while (i < nbr)
	{
		while (j < nbr)
		{
			if (d->ord[i] > d->ord[j])
				the_swapper(d, i, j);
			j++;
		}
		i++;
		j = i + 1;
	}
	i = 0;
	while (i < nbr)
	{
		ft_printf("verif [%d]\n", d->idx[i]);
		i++;
	}
}
