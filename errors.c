/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:28:18 by nchennaf          #+#    #+#             */
/*   Updated: 2022/04/29 14:47:03 by nchennaf         ###   ########.fr       */
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

/* void	no_doppelganger(char *s)
{

} */
