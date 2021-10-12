/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4_5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 16:35:19 by lduplain          #+#    #+#             */
/*   Updated: 2021/09/28 17:36:58 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sort_4_5(t_container *container)
{
	while (list_size(container->stack_a) > 3)
	{
		fill_sorted_values(container, container->stack_a);
		lowest_to_top(container, &container->stack_a,
			container->sorted_values[0]);
		free(container->sorted_values);
		container->sorted_values = NULL;
		push(container, &container->stack_a, &container->stack_b, TRUE);
	}
	sort_3(container);
	push(container, &container->stack_b, &container->stack_a, TRUE);
	push(container, &container->stack_b, &container->stack_a, TRUE);
}
