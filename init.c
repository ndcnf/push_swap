/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 18:09:04 by nchennaf          #+#    #+#             */
/*   Updated: 2022/04/19 11:42:48 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	the_allocator(t_data *stks)
{
	stks->a = malloc(sizeof(t_stack));
	if (!stks->a)
		errorminator(ERR_MLC);
	stks->b = malloc(sizeof(t_stack));
	if (!stks->b)
		errorminator(ERR_MLC);
}

void	init_stacks(t_data *stks)
{
	stks->a->i = 0;
	stks->b->i = 0;
	stks->a->nbr = 0;
	stks->b->nbr = 0;
	stks->a->v = NULL;
	stks->b->v = NULL;
}
