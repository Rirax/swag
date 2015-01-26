/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlechapt <rlechapt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/24 05:20:37 by rlechapt          #+#    #+#             */
/*   Updated: 2015/01/24 06:57:05 by rlechapt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_a(int *pile_a, int len_a)
{
	int	tmp;
	int	i;

	if (len_a < 2)
		return ;
	i = len_a - 1;
	tmp = pile_a[i];
	while (i >= 0)
	{
		pile_a[i] = pile_a[i - 1];
		i--;
	}
	pile_a[0] = tmp;
	ft_putstr("rra ");
}

void	reverse_rotate_b(int *pile_b, int len_b)
{
	int	tmp;
	int	i;

	if (len_b < 2)
		return ;
	i = len_b - 1;
	tmp = pile_b[i];
	while (i >= 0)
	{
		pile_b[i] = pile_b[i - 1];
		i--;
	}
	pile_b[0] = tmp;
	ft_putstr("rrb ");
}

void	reverse_rotate_r(int *pile_a, int len_a, int *pile_b, int len_b)
{
	reverse_rotate_a(pile_a, len_a);
	reverse_rotate_b(pile_b, len_b);
	ft_putstr("rrr ");
}
