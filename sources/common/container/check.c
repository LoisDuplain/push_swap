/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 15:49:01 by lduplain          #+#    #+#             */
/*   Updated: 2021/06/08 15:50:10 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_bool	check(t_container *container)
{
	int	index;
	int	current;
	int	next;

	if (list_size(container->stack_b) > 0)
		return (FALSE);
	index = -1;
	while (++index < list_size(container->stack_a) - 1)
	{
		current = get_stack_value(container->stack_a, index);
		next = get_stack_value(container->stack_a, index + 1);
		if (current >= next)
			return (FALSE);
	}
	return (TRUE);
}
