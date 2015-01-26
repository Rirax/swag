/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlechapt <rlechapt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/24 04:32:59 by rlechapt          #+#    #+#             */
/*   Updated: 2015/01/24 09:33:11 by rlechapt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(int *pile_a, int len_a)
{
	int	tmp;

	if (len_a < 2)
		return ;
	tmp = pile_a[0];
	pile_a[0] = pile_a[1];
	pile_a[1] = tmp;
	ft_putstr("sa ");
}

void	swap_b(int *pile_b, int len_b)
{
	int	tmp;

	if (len_b < 2)
		return ;
	tmp = pile_b[0];
	pile_b[0] = pile_b[1];
	pile_b[1] = tmp;
	ft_putstr("sb ");
}

void	swap_s(int *pile_a, int len_a, int *pile_b, int len_b)
{
	swap_a(pile_a, len_a);
	swap_b(pile_b, len_b);
	ft_putstr("ss ");
}
