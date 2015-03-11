/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tricks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlechapt <rlechapt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/11 05:25:38 by rlechapt          #+#    #+#             */
/*   Updated: 2015/03/11 06:11:50 by rlechapt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	tricks(t_env *e, t_flags *f)
{
	if (e->len_a == 3)
	{
		if (e->pile_a[0] > e->pile_a[1])
			swap_a(e, f);
		while (e->pile_a[0] > e->pile_a[e->len_a - 1] && e->len_a > 0)
			reverse_rotate_a(e, f);
	}
	if (e->pile_a[e->len_a - 2] > e->pile_a[e->len_a - 1])
	{
		reverse_rotate_a(e, f);
		reverse_rotate_a(e, f);
		swap_a(e, f);
		rotate_a(e, f);
		rotate_a(e, f);
	}
}
