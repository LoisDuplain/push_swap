/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_container.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 17:42:44 by lduplain          #+#    #+#             */
/*   Updated: 2021/06/01 16:44:09 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	display_container(t_container *container)
{
	int		index;
	t_list	*a;
	t_list	*b;

	ft_putstr_nl("|-------------| |-------------|");
	index = -1;
	while (++index < container->size)
	{
		a = list_get(container->stack_a, index);
		b = list_get(container->stack_b, index);
		if (a != NULL)
			ft_printf("| %11d | ", ((t_stack_elem *)a->data)->value);
		else
			ft_printf("|             | ");
		if (b != NULL)
			ft_printf("| %11d |", ((t_stack_elem *)b->data)->value);
		else
			ft_printf("|             |");
		ft_putchar('\n');
	}
	ft_putstr_nl("|-------------| |-------------|");
	ft_putstr_nl("|   Stack A   | |   Stack B   |");
	ft_putstr_nl("|-------------| |-------------|");
}
