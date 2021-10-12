/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 16:48:58 by lduplain          #+#    #+#             */
/*   Updated: 2021/09/28 17:36:58 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static void	fill_chunk_limits(t_container *container, int chunks)
{
	int	*sorted_values;
	int	*chunk_limits;
	int	values_per_chunk;
	int	index;

	sorted_values = container->sorted_values;
	chunk_limits = ft_calloc(chunks, sizeof(int));
	if (chunk_limits == NULL)
	{
		destroy_container(&container);
		display_error();
		exit(0);
		return ;
	}
	values_per_chunk = container->size / chunks;
	index = -1;
	while (++index < chunks - 1)
		chunk_limits[index] = sorted_values[values_per_chunk * (index + 1)];
	chunk_limits[index] = sorted_values[container->size - 1];
	container->chunk_limits = chunk_limits;
}

static void	push_chunks(t_container *container, int chunks)
{
	int	chunk_limits_index;
	int	stack_size;
	int	index;
	int	first_a;

	chunk_limits_index = -1;
	while (++chunk_limits_index < chunks)
	{
		if (list_size(container->stack_a) <= 3)
			break ;
		stack_size = list_size(container->stack_a);
		index = -1;
		while (++index < stack_size)
		{
			if (list_size(container->stack_a) <= 3)
				break ;
			first_a = get_first_a(container);
			if (first_a < container->chunk_limits[chunk_limits_index])
				push(container, &container->stack_a, &container->stack_b, TRUE);
			else
				rotate(container, &container->stack_a, TRUE);
		}
	}
}

static int	sort_behavior(t_container *container)
{
	int	lowest;

	lowest = get_first_a(container);
	while (list_size(container->stack_b) > 0)
	{
		if (get_first_b(container) > get_first_a(container))
			while (get_first_b(container) > get_first_a(container))
				rotate(container, &container->stack_a, TRUE);
		else if (get_first_b(container) < lowest)
		{
			lowest_to_top(container, &container->stack_a, lowest);
			lowest = get_first_b(container);
		}
		else if (get_first_b(container) < get_first_a(container))
			while (get_last_a(container) > get_first_b(container))
				reverse(container, &container->stack_a, TRUE);
		push(container, &container->stack_b, &container->stack_a, TRUE);
	}
	return (lowest);
}

void	sort_big(t_container *container, int chunks)
{
	fill_sorted_values(container, container->stack_a);
	fill_chunk_limits(container, chunks);
	push_chunks(container, chunks);
	sort_3(container);
	lowest_to_top(container, &container->stack_a, sort_behavior(container));
}
