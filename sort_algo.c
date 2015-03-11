/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlechapt <rlechapt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/07 04:51:31 by rlechapt          #+#    #+#             */
/*   Updated: 2015/03/11 06:11:24 by rlechapt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		is_grwing(int *pile, int len)
{
	int	i;

	i = 0;
	while (i < len - 1)
	{
		if (pile[i] > pile[i + 1] && len > 1)
			return (0);
		i++;
	}
	return (1);
}

int		is_dscnding(int *pile, int len)
{
	int	i;

	i = 0;
	while (i < len - 1)
	{
		if (pile[i] < pile[i + 1] && len > 1)
			return (0);
		i++;
	}
	return (1);
}

int		lowest_pos(int *pile, int len)
{
	int	i;
	int	low;
	int	save;

	i = 0;
	low = pile[0];
	save = 0;
	while (i < len)
	{
		if (pile[i] < low)
		{
			low = pile[i];
			save = i;
		}
		i++;
	}
	return (save + 1);
}

void	sort_algo(t_env *e, t_flags *f)
{
	tricks(e, f);
	while (e->len_a > 0)
	{
		if (is_grwing(e->pile_a, e->len_a) && is_dscnding(e->pile_b, e->len_b))
			break ;
		if (lowest_pos(e->pile_a, e->len_a) == 1)
			push_b(e, f);
		else if (lowest_pos(e->pile_a, e->len_a) <= e->len_a / 2)
			rotate_a(e, f);
		else if (lowest_pos(e->pile_a, e->len_a) > e->len_a / 2)
			reverse_rotate_a(e, f);
	}
	while (e->len_b > 0)
		push_a(e, f);
}
