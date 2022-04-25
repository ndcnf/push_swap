/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 14:08:24 by nchennaf          #+#    #+#             */
/*   Updated: 2022/04/20 19:15:37 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	errorminator(char *s)
{
	ft_printf(ERROR);
	ft_printf(s);
	exit(EXIT_FAILURE);
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
		errorminator(ERR_ARG);
	ft_printf("et la, tu me vois ?\n");
	pop_stack_a(&d, argv);
	ft_printf("coucou\n");
	ft_printf("argv1 [%d]\n", argv[1]);
	ft_printf("argv2 [%d]\n", argv[2]);
	ft_printf("[%d][%d]", argv[1], argv[2]);
	return (EXIT_SUCCESS);
}
