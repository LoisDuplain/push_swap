/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 17:16:58 by lduplain          #+#    #+#             */
/*   Updated: 2021/06/01 15:08:09 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	swap(t_container *container, t_list *stack, t_bool display)
{
	t_stack_elem	*temp;

	if (list_size(stack) < 2)
		return ;
	temp = list_get(stack, 1)->data;
	list_get(stack, 1)->data = list_get(stack, 0)->data;
	list_get(stack, 0)->data = temp;
	display_action(container, stack, "s", display);
}
