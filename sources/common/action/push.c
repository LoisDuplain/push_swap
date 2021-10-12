/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 17:30:12 by lduplain          #+#    #+#             */
/*   Updated: 2021/06/01 15:26:55 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	push(t_container *container, t_list **from, t_list **to, t_bool display)
{
	if (list_size(*from) <= 0)
		return ;
	list_add_front_new(
		to,
		create_stack_elem(((t_stack_elem *)list_get(*from, 0)->data)->value));
	list_remove(from, destroy_stack_elem, 0);
	display_action(container, *to, "p", display);
}
