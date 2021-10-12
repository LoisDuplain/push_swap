/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 18:28:54 by lduplain          #+#    #+#             */
/*   Updated: 2021/06/01 15:13:46 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	rotate(t_container *container, t_list **stack, t_bool display)
{
	if (list_size(*stack) <= 0)
		return ;
	list_add_back_new(
		stack,
		create_stack_elem(((t_stack_elem *)list_get(*stack, 0)->data)->value));
	list_remove(stack, destroy_stack_elem, 0);
	display_action(container, *stack, "r", display);
}
