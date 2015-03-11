/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlechapt <rlechapt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/24 05:20:37 by rlechapt          #+#    #+#             */
/*   Updated: 2015/02/24 17:00:18 by rlechapt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_a(t_env *e, t_flags *f)
{
	int	tmp;
	int	i;

	if (e->len_a < 2)
		return ;
	i = e->len_a - 1;
	tmp = e->pile_a[i];
	while (i >= 0)
	{
		e->pile_a[i] = e->pile_a[i - 1];
		i--;
	}
	e->pile_a[0] = tmp;
	e->count += 1;
	ft_putstr("rra ");
	if (f->v == 1)
		stack_status(e);
}

void	reverse_rotate_b(t_env *e, t_flags *f)
{
	int	tmp;
	int	i;

	if (e->len_b < 2)
		return ;
	i = e->len_b - 1;
	tmp = e->pile_b[i];
	while (i >= 0)
	{
		e->pile_b[i] = e->pile_b[i - 1];
		i--;
	}
	e->pile_b[0] = tmp;
	e->count += 1;
	ft_putstr("rrb ");
	if (f->v == 1)
		stack_status(e);
}

void	reverse_rotate_r(t_env *e, t_flags *f)
{
	reverse_rotate_a(e, f);
	reverse_rotate_b(e, f);
	e->count -= 1;
	ft_putstr("rrr ");
	if (f->v == 1)
		stack_status(e);
}
