/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 16:34:51 by lduplain          #+#    #+#             */
/*   Updated: 2021/06/01 16:35:09 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sort_3(t_container *container)
{
	int	first;
	int	second;
	int	third;

	first = get_stack_value(container->stack_a, 0);
	second = get_stack_value(container->stack_a, 1);
	third = get_stack_value(container->stack_a, 2);
	if (first > second && first < third)
		swap(container, container->stack_a, TRUE);
	else if (first > second && second > third)
	{
		swap(container, container->stack_a, TRUE);
		reverse(container, &container->stack_a, TRUE);
	}
	else if (first > second && first > third && second < third)
		rotate(container, &container->stack_a, TRUE);
	else if (first < second && first < third && second > third)
	{
		swap(container, container->stack_a, TRUE);
		rotate(container, &container->stack_a, TRUE);
	}
	else if (first < second && first > third)
		reverse(container, &container->stack_a, TRUE);
}
