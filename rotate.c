/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlechapt <rlechapt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/24 04:55:28 by rlechapt          #+#    #+#             */
/*   Updated: 2015/01/24 06:55:14 by rlechapt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(int *pile_a, int len_a)
{
	int	tmp;
	int	i;

	if (len_a < 2)
		return ;
	tmp = pile_a[0];
	i = 0;
	while (i < len_a)
	{
		pile_a[i] = pile_a[i + 1];
		i++;
	}
	pile_a[len_a - 1] = tmp;
	ft_putstr("ra ");
}

void	rotate_b(int *pile_b, int len_b)
{
	int	tmp;
	int	i;

	if (len_b < 2)
		return ;
	tmp = pile_b[0];
	i = 0;
	while (i < len_b)
	{
		pile_b[i] = pile_b[i + 1];
		i++;
	}
	pile_b[len_b - 1] = tmp;
	ft_putstr("rb ");
}

void	rotate_r(int *pile_a, int len_a, int *pile_b, int len_b)
{
	rotate_a(pile_a, len_a);
	rotate_b(pile_b, len_b);
	ft_putstr("rr ");
}
