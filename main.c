/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlechapt <rlechapt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/23 03:12:10 by rlechapt          #+#    #+#             */
/*   Updated: 2015/01/26 04:43:34 by rlechapt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int argc, char **argv)
{
	int	*pile_a;
	int	*pile_b;
	int	len_a;
	int	len_b;
	int	i;

	len_a = argc - 1;
	if ((pile_a = (int*)malloc(sizeof(pile_a) * len_a)) == NULL)
		return (-1);
	if ((pile_b = (int*)malloc(sizeof(pile_b) * len_a)) == NULL)
		return (-1);
	len_b = 0;
	i = 0;
	while (i < len_a)
	{
		pile_a[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	algo(pile_a, len_a, pile_b, len_b);
	i = 0;
	while (i < len_a)
	{
		ft_putnbr(pile_a[i]);
		ft_putchar(' ');
		i++;
	}
	return (0);
}

