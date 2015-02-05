/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlechapt <rlechapt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/24 04:33:41 by rlechapt          #+#    #+#             */
/*   Updated: 2015/02/05 09:22:41 by rlechapt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_env *e, t_flags *f)
{
	int	i;

	if (e->len_b == 0)
		return ;
	i = e->len_a;
	while (i > 0)
	{
		e->pile_a[i] = e->pile_a[i - 1];
		i--;
	}
	e->pile_a[0] = e->pile_b[0];
	e->len_a += 1;
	e->len_b -= 1;
	i = 0;
	while (i < e->len_b)
	{
		e->pile_b[i] = e->pile_b[i + 1];
		i++;
	}
	e->count += 1;
	if (f->v == 1)
		put_action(e, "pa");
	e->str = ft_strjoin(e->str, "pa ");
}

void	push_b(t_env *e, t_flags *f)
{
	int	i;

	if (e->len_a == 0)
		return ;
	i = e->len_b;
	while (i > 0)
	{
		e->pile_b[i] = e->pile_b[i - 1];
		i--;
	}
	e->pile_b[0] = e->pile_a[0];
	e->len_b += 1;
	e->len_a -= 1;
	i = 0;
	while (i < e->len_a)
	{
		e->pile_a[i] = e->pile_a[i + 1];
		i++;
	}
	e->count += 1;
	if (f->v == 1)
		put_action(e, "pb");
	e->str = ft_strjoin(e->str, "pb ");
}
