/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlechapt <rlechapt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/24 04:55:28 by rlechapt          #+#    #+#             */
/*   Updated: 2015/03/07 05:31:45 by rlechapt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_env *e, t_flags *f)
{
	int	tmp;
	int	i;

	if (e->len_a < 2)
		return ;
	tmp = e->pile_a[0];
	i = 0;
	while (i < e->len_a)
	{
		e->pile_a[i] = e->pile_a[i + 1];
		i++;
	}
	e->pile_a[e->len_a - 1] = tmp;
	e->count += 1;
	ft_putstr("ra ");
	if (f->v == 1)
		stack_status(e);
}

void	rotate_b(t_env *e, t_flags *f)
{
	int	tmp;
	int	i;

	if (e->len_b < 2)
		return ;
	tmp = e->pile_b[0];
	i = 0;
	while (i < e->len_b)
	{
		e->pile_b[i] = e->pile_b[i + 1];
		i++;
	}
	e->pile_b[e->len_b - 1] = tmp;
	e->count += 1;
	ft_putstr("rb ");
	if (f->v == 1)
		stack_status(e);
}

void	rotate_r(t_env *e, t_flags *f)
{
	rotate_a(e, f);
	rotate_b(e, f);
	e->count -= 1;
	ft_putstr("rr ");
	if (f->v == 1)
		stack_status(e);
}
