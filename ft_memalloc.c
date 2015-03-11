/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlechapt <rlechapt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 10:18:23 by rlechapt          #+#    #+#             */
/*   Updated: 2015/03/11 06:02:15 by rlechapt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*ft_memalloc(size_t size)
{
	void	*str;
	size_t	i;

	i = 0;
	if ((str = malloc(sizeof(*str) * (size))) == NULL)
		return (NULL);
	while (i < size)
	{
		((char *)str)[i] = '\0';
		i++;
	}
	return (str);
}
