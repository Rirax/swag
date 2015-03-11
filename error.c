/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlechapt <rlechapt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/02 11:04:45 by rlechapt          #+#    #+#             */
/*   Updated: 2015/03/11 05:59:01 by rlechapt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_puterror(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	exit(0);
}

void	check_error(t_env *e, char **av)
{
	int	i;
	int	j;

	i = e->i;
	while (av[i] != '\0')
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			if ((av[i][j] == 43 || av[i][j] == 45) && (av[i][j + 1] >= 48 &&
				av[i][j + 1] <= 57))
			{
				if (av[i][j - 1] >= 48 && av[i][j - 1] <= 57)
					ft_puterror("Error\n");
			}
			else if (av[i][j] >= 48 && av[i][j] <= 57)
				;
			else
				ft_puterror("Error\n");
			j++;
		}
		i++;
	}
}

void	check_pile(t_env *e)
{
	int	j;
	int	i;

	i = 0;
	while (i < e->len_a)
	{
		j = i + 1;
		while (j < e->len_a)
		{
			if (e->pile_a[i] == e->pile_a[j])
				ft_puterror("Error\n");
			j++;
		}
		i++;
	}
}
