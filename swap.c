/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlechapt <rlechapt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/24 04:32:59 by rlechapt          #+#    #+#             */
/*   Updated: 2015/02/05 09:19:52 by rlechapt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_env *e, t_flags *f)
{
	int	tmp;

	if (e->len_a < 2)
		return ;
	tmp = e->pile_a[0];
	e->pile_a[0] = e->pile_a[1];
	e->pile_a[1] = tmp;
	e->count += 1;
	if (f->v == 1)
		put_action(e, "sa");
	e->str = ft_strjoin(e->str, "sa ");
}

void	swap_b(t_env *e, t_flags *f)
{
	int	tmp;

	if (e->len_b < 2)
		return ;
	tmp = e->pile_b[0];
	e->pile_b[0] = e->pile_b[1];
	e->pile_b[1] = tmp;
	e->count += 1;
	if (f->v == 1)
		put_action(e, "sb");
	e->str = ft_strjoin(e->str, "sb ");
}

void	swap_s(t_env *e, t_flags *f)
{
	swap_a(e, f);
	swap_b(e, f);
	if (f->v == 1)
		put_action(e, "ss");
	e->str = ft_strjoin(e->str, "ss ");
	e->count -= 1;
}
