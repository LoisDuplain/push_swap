/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 18:36:39 by lduplain          #+#    #+#             */
/*   Updated: 2021/06/01 16:43:59 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	reverse(t_container *container, t_list **stack, t_bool display)
{
	if (list_size(*stack) <= 0)
		return ;
	list_add_front_new(
		stack,
		create_stack_elem(((t_stack_elem *)list_get(*stack,
					list_size(*stack) - 1)->data)->value));
	list_remove(stack, destroy_stack_elem, list_size(*stack) - 1);
	display_action(container, *stack, "rr", display);
}
