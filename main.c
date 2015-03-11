/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlechapt <rlechapt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/23 03:12:10 by rlechapt          #+#    #+#             */
/*   Updated: 2015/03/11 06:22:24 by rlechapt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	total_put(int t)
{
	ft_putstr("total: ");
	ft_putnbr(t);
	ft_putstr(" actions\n");
}

void	print_pile(int *pile, char c, int len)
{
	int	i;

	ft_putchar(c);
	ft_putstr(": ");
	i = len - 1;
	while (i >= 0)
	{
		ft_putnbr(pile[i]);
		ft_putchar(' ');
		i--;
	}
	ft_putchar('\n');
}

void	stack_status(t_env *e)
{
	ft_putchar('\n');
	print_pile(e->pile_a, 'a', e->len_a);
	print_pile(e->pile_b, 'b', e->len_b);
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int		i;
	t_env	e;
	t_flags	f;

	settings(&e, &f, argc, argv);
	if ((e.pile_a = (int*)malloc(sizeof(e.pile_a) * e.len_a)) == NULL)
		return (1);
	if ((e.pile_b = (int*)malloc(sizeof(e.pile_b) * e.len_a)) == NULL)
		return (1);
	i = e.i;
	while (e.i < e.len_a + i)
	{
		e.pile_a[e.j] = ft_atoi(argv[e.i]);
		if (!ft_strequ(argv[e.i], ft_itoa(ft_atoi(argv[e.i]))))
			ft_puterror("Error\n");
		e.i++;
		e.j++;
	}
	check_pile(&e);
	sort_algo(&e, &f);
	if (f.v != 1)
		ft_putstr("\033[1D\n");
	if (f.t == 5)
		total_put(e.count);
	return (0);
}
