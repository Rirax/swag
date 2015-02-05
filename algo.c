/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlechapt <rlechapt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 02:40:39 by rlechapt          #+#    #+#             */
/*   Updated: 2015/02/03 19:04:05 by rlechapt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int		test_pile(int *pile, int len)
{
	int	i;

	i = 0;
	print_pile(pile, 'a', len);
	while (i < len - 1)
	{
		if (pile[i] > pile[i + 1])
			return (-1);
		i++;
	}
	return (1);
}

void	algo(t_env *e, t_flags *f)
{
	int	i;
	int	j;

	i = 0;
	j = e->len_a - 1;
	while (i < j)
	{
		if (e->pile_a[i] > e->pile_a[i + 1])
		{
			while (e->len_a > 0)
			{
				if (e->pile_a[0] > e->pile_a[1])
					swap_a(e, f);
				while (e->pile_a[0] > e->pile_a[e->len_a - 1])
					reverse_rotate_a(e, f);
//				if (test_pile(e->pile_a, e->len_a) == 1)
//					break;
				push_b(e, f);
			}
			while (e->len_b > 0)
			{
				if (e->pile_b[0] < e->pile_b[1])
					swap_b(e, f);
				while (e->pile_b[0] < e->pile_b[e->len_b - 1])
					reverse_rotate_b(e, f);
				push_a(e, f);
			}
			i = -1;
		}
		i++;
	}
}
