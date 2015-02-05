/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlechapt <rlechapt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/23 03:40:15 by rlechapt          #+#    #+#             */
/*   Updated: 2015/02/05 09:40:35 by rlechapt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "./libft/includes/libft.h"

typedef struct		s_list
{
	char			*mv;
	struct s_list	*nxt;
}					t_list;

typedef struct		s_flags
{
	int				v;
	int				t;
	int				d;
}					t_flags;

typedef struct		s_env
{
	char			*str;
	int				*pile_a;
	int				*pile_b;
	int				len_a;
	int				len_b;
	int				count;
	int				i;
	int				j;
}					t_env;

#endif
