/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inputs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:39:55 by nchennaf          #+#    #+#             */
/*   Updated: 2022/04/27 15:42:14 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	one_string(t_data *d, char *argv[])
{
	int	i;

	i = 0;
	d->a->i = 0;

	i = 0;
	//Trouver la bonne condition pour la boucle ici
	while (argv[1][i] != 0)
	{
		d->a->v[d->a->i] = (long *)ft_split(argv[1], ' ')[i];
		ft_printf("valeur [%s] - i struct [%d] - i [%d]\n", d->a->v[d->a->i], d->a->i, i);
		i++;
		d->a->i++;
		d->a->nbr++;
	}
	ft_printf("%d\n", d->a->nbr);
	
	
	
	
	
	
	
	
	
	
	//i = word_cnt(argv[1], ' ');
	//ft_printf("%d", i);

/* 	while (argv[1][i])
	{
		if (argv[1][i] == ' ')
		{
			d->a->nbr++;
			d->a->i++;

		}
		ft_printf()
	}
	while (argv[1])
	{
		ft_printf("[%s]\n", argv[1]);
		ft_printf("[%d]\n", ft_split(argv[1], ' '));
		d->a->nbr++;
		d->a->i++;
		//segfault ici....:
		//d->a->v[d->a->i] = (int)ft_split(argv[i++], ' ');
	}
	d->arg = 1; */
}

void	every_arg_counts(t_data *d, int argc, char *argv[])
{
	(void)argc;
	(void)argv;
	d->arg = 0;
}
