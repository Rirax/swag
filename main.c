/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlechapt <rlechapt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/23 03:12:10 by rlechapt          #+#    #+#             */
/*   Updated: 2015/02/05 09:42:59 by rlechapt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	total_put(int t)
{
	ft_putstr("total: ");
	ft_putnbr(t);
	ft_putstr(" actions\n\n");
}

void	ft_putstr_mod(char *str)
{
	int	i;

	i = 0;
	while (str[i + 1])
	{
		write(1, &str[i], 1);
		i++;
	}
	ft_putchar('\n');
}

void	put_action(t_env *e, char *act)
{
	ft_putstr(act);
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
		if (ft_atol(argv[e.i]) < INT_MIN || ft_atol(argv[e.i]) > INT_MAX)
			ft_puterror("Error\n");
		e.pile_a[e.j] = ft_atoi(argv[e.i]);
		e.i++;
		e.j++;
	}
	check_pile(&e);
	e.str = "";
	algo(&e, &f);
	if (f.t == 5)
		total_put(e.count);
	ft_putstr_mod(e.str);
	return (0);
}
