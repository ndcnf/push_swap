/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 14:08:24 by nchennaf          #+#    #+#             */
/*   Updated: 2022/04/28 14:37:37 by nchennaf         ###   ########.fr       */
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
	ft_printf("au milieu [%s]\n", argv[1]);
	if (!argv[1])
	{
		ft_printf("je me casse, !argv[1] !\n");
		errorminator(ERR_ARG);
	}
	ft_printf("et la, tu me vois ?\n");
	pop_stack_a(&d, argv);
	only_int(&d, argv);
	ft_printf("coucou\n");
	ft_printf("argv1 [%s]\n", argv[1]);
	ft_printf("argv2 [%s]\n", argv[2]);
	ft_printf("[%s][%s]", argv[0], argv[1]);
	return (EXIT_SUCCESS);
}
