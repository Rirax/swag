/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlechapt <rlechapt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/23 03:40:15 by rlechapt          #+#    #+#             */
/*   Updated: 2015/03/11 06:07:42 by rlechapt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

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
	int				len_max;
	int				count;
	int				i;
	int				j;
}					t_env;

void				check_param(t_flags *f, char **av);
void				settings(t_env *e, t_flags *f, int ac, char **av);
void				ft_puterror(char *str);
void				check_error(t_env *e, char **av);
void				check_pile(t_env *e);
void				total_put(int t);
void				print_pile(int *pile, char c, int len);
void				stack_status(t_env *e);
void				push_a(t_env *e, t_flags *f);
void				push_b(t_env *e, t_flags *f);
void				reverse_rotate_a(t_env *e, t_flags *f);
void				reverse_rotate_b(t_env *e, t_flags *f);
void				reverse_rotate_r(t_env *e, t_flags *f);
void				rotate_a(t_env *e, t_flags *f);
void				rotate_b(t_env *e, t_flags *f);
void				rotate_r(t_env *e, t_flags *f);
void				swap_a(t_env *e, t_flags *f);
void				swap_b(t_env *e, t_flags *f);
void				swap_s(t_env *e, t_flags *f);
int					test_pile(int *pile, int len);
void				sort_algo(t_env *e, t_flags *f);
int					is_grwing(int *pile, int len);
int					is_dscnding(int *pile, int len);
int					lowest_pos(int *pile, int len);
void				tricks(t_env *e, t_flags *f);
void				*ft_memalloc(size_t size);
int					ft_strequ(char const *s1, char const *s2);
int					ft_atoi(const char *str);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putnbr(int n);
char				*ft_itoa(int n);

#endif
