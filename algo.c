/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlechapt <rlechapt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 02:40:39 by rlechapt          #+#    #+#             */
/*   Updated: 2015/01/26 06:01:36 by rlechapt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	s_and_m(int *pile_a, int len_a, int *pile_b, int len_b)
{
	int	i;

	i = 0;
	while (len_b > 0)
	{
		push_a(pile_a, &len_a, pile_b, &len_b);
		i++;
	}
	i = 0;
	while (i < len_a)
	{
		ft_putnbr(pile_a[i]);
		ft_putchar(' ');
		i++;
	}
	exit(0);
	ft_putnbr(pile_b[0]);
	ft_putnbr(len_b);
}

int		test_piles(int *pile_a, int len_a, int *pile_b, int len_b)
{
	int	i;
	int	ret;

	i = 0;
	ret = 0;
	while (i < len_a - 1)
	{
		if (pile_a[i] > pile_a[i + 1])
			ret += 1;
		i++;
	}
	i = 0;
	while (i < len_b - 1)
	{
		if (pile_b[i] < pile_b[i + 1])
			ret += 1;
		i++;
	}
	if (ret == 0)
	{
		s_and_m(pile_a, len_a, pile_b, len_b);
		ft_putnbr(len_b);
		return (1);
	}
	return (0);
}

void	algo(int *pile_a, int len_a, int *pile_b, int len_b)
{
	int	i;
	int	j;

	i = 0;
	j = len_a - 1;
	while (i < j)
	{
		if (pile_a[i] > pile_a[i + 1])
		{
			while (len_a > 0)
			{
				if (pile_a[0] > pile_a[1])
					swap_a(pile_a, len_a);
			test_piles(pile_a, len_a, pile_b, len_b);
			push_b(pile_b, &len_b, pile_a, &len_a);
			}
			while (len_b > 0)
			{
				if (pile_b[0] < pile_b[1])
					swap_b(pile_b, len_b);
				test_piles(pile_a, len_a, pile_b, len_b);
				push_a(pile_a, &len_a, pile_b, &len_b);
			}
			i = -1;
		}
		i++;
	}
}
