/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlechapt <rlechapt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/24 04:33:41 by rlechapt          #+#    #+#             */
/*   Updated: 2015/01/24 06:50:02 by rlechapt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(int *pile_a, int *len_a, int *pile_b, int *len_b)
{
	int	i;

	if (len_b == 0)
		return ;
	i = *len_a;
	while (i > 0)
	{
		pile_a[i] = pile_a[i - 1];
		i--;
	}
	pile_a[0] = pile_b[0];
	*len_a += 1;
	*len_b -= 1;
	i = 0;
	while (i < *len_b)
	{
		pile_b[i] = pile_b[i + 1];
		i++;
	}
	ft_putstr("pa ");
}

void	push_b(int *pile_b, int *len_b, int *pile_a, int *len_a)
{
	int	i;

	if (len_a == 0)
		return ;
	i = *len_b;
	while (i > 0)
	{
		pile_b[i] = pile_b[i - 1];
		i--;
	}
	pile_b[0] = pile_a[0];
	*len_b += 1;
	*len_a -= 1;
	i = 0;
	while (i < *len_a)
	{
		pile_a[i] = pile_a[i + 1];
		i++;
	}
	ft_putstr("pb ");
}
