/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_sorted_values.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 14:37:55 by lduplain          #+#    #+#             */
/*   Updated: 2021/06/02 15:38:03 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	fill_sorted_values(t_container *container, t_list *stack)
{
	int	stack_size;
	int	*sorted_values;
	int	index;

	stack_size = list_size(stack);
	sorted_values = ft_calloc(stack_size, sizeof(int));
	if (sorted_values == NULL)
	{
		destroy_container(&container);
		display_error();
		exit(0);
		return ;
	}
	index = -1;
	while (++index < stack_size)
		sorted_values[index] = get_stack_value(stack, index);
	quick_sort(sorted_values, 0, stack_size - 1);
	container->sorted_values = sorted_values;
}
