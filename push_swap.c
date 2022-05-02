/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 14:08:24 by nchennaf          #+#    #+#             */
/*   Updated: 2022/05/02 16:58:42 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
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
		return(EXIT_SUCCESS);
	pop_stack_a(&d, argc, argv);
	no_doppelganger(&d);

	// POUR VERIFIER L'ORDRE DES VALEURS
	if (d.a->nbr > 1)
		pb(&d);
		//sa(&d);
	d.a->i = 0;
	while (d.a->i < d.a->nbr)
		ft_printf("%d ", d.a->v[d.a->i++]);
	// FIN DE VERIF
	
	return (EXIT_SUCCESS);
}
