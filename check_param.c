/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_param.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlechapt <rlechapt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/03 12:01:34 by rlechapt          #+#    #+#             */
/*   Updated: 2015/03/11 06:00:14 by rlechapt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_param(t_flags *f, char **av)
{
	int	i;

	i = 0;
	f->v = 0;
	f->t = 0;
	f->d = 0;
	if (av[1][0] == '-')
	{
		i = 1;
		while (av[1][i])
		{
			if (av[1][i] == 'v')
				f->v = 1;
			if (av[1][i] == 't')
				f->t = 5;
			if (av[1][i] == 'v' || av[1][i] == 't')
				f->d = 1;
			if ((av[1][i] >= 48 && av[1][i] <= 57) ||
					av[1][i] == 'v' || av[1][i] == 't')
				;
			else
				ft_puterror("Error\n");
			i++;
		}
	}
}

void	settings(t_env *e, t_flags *f, int ac, char **av)
{
	if (ac < 2)
		exit(0);
	check_param(f, av);
	if (f->d == 1)
	{
		e->len_a = ac - 2;
		e->len_max = e->len_a;
		e->len_b = 0;
		e->count = 0;
		e->i = 2;
		e->j = 0;
	}
	else
	{
		e->len_a = ac - 1;
		e->len_max = e->len_a;
		e->len_b = 0;
		e->count = 0;
		e->i = 1;
		e->j = 0;
	}
	check_error(e, av);
}
