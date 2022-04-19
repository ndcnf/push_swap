/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 14:12:35 by nchennaf          #+#    #+#             */
/*   Updated: 2022/04/19 11:36:55 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_data *stks)
{
	int	tempura;

	tempura = 0;
	if (stks->a->nbr > 2)
	{
		tempura = stks->a->v[stks->a->i-1];
		stks->a->v[stks->a->i-1] = stks->a->v[stks->a->i];
		stks->a->v[stks->a->i] = tempura;
	}
}
