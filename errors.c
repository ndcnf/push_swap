/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:28:18 by nchennaf          #+#    #+#             */
/*   Updated: 2022/05/20 10:48:56 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	errorminator(char *s)
{
	ft_printf(ERROR);
	ft_printf(s);
	exit(EXIT_FAILURE);
}

void	only_int(t_data *d, char *argv[])
{
	int	i;

	i = 0;
	while (argv[1][i])
	{
		if (argv[1][i] < '0' || argv[1][i] > '9')
		{
			if (argv[1][i] != ' ' && argv[1][i] != '-' && argv[1][i] != '+')
				errorminator(ERR_INT);
		}
		i++;
	}
	i = 0;
	while (i < d->a->nbr)
	{
		if (ft_atol((char *)d->a->v[i]) > MAX_INT)
			errorminator(ERR_SZE);
		if (ft_atol((char *)d->a->v[i]) < MIN_INT)
			errorminator(ERR_SZE);
		i++;
	}
}

void	no_doppelganger(t_data *d)
{
	int	i;

	i = 0;
	d->a->i = 1;
	while (i < d->a->nbr)
	{
		d->a->i = i + 1;
		while (d->a->i < d->a->nbr)
		{
			if (d->a->v[d->a->i] == d->a->v[i])
				errorminator(ERR_DPL);
			d->a->i++;
		}
		i++;
	}
}

void	already_sorted(t_data *d)
{
	int	i;

	i = 0;
	while (i < d->a->nbr - 1)
	{
		if (d->a->v[i] == d->ord[i])
		{
			i++;
			continue ;
		}
		else
			return ;
	}
	exit (EXIT_SUCCESS);
}
