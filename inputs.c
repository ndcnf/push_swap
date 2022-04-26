/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inputs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:39:55 by nchennaf          #+#    #+#             */
/*   Updated: 2022/04/26 16:09:22 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	one_string(t_data *d, char *argv[])
{
	int	i;

	i = 1;
	d->a->i = 0;
	//Ici faire en sorte de
	while (argv)
	{
		ft_printf("[%s]\n", argv[i]);
		ft_printf("[%d]\n", ft_split(argv[i], ' '));
		i++;
		//segfault ici....:
		//d->a->v[d->a->i] = (int)ft_split(argv[i++], ' ');
	}
	d->arg = 1;
}

void	every_arg_counts(t_data *d, int argc, char *argv[])
{
	(void)argc;
	(void)argv;
	d->arg = 0;
}
