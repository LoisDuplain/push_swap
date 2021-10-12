/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lowest_to_top.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 14:29:51 by lduplain          #+#    #+#             */
/*   Updated: 2021/09/28 17:36:58 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	lowest_to_top(t_container *container, t_list **stack, int lowest)
{
	if (get_value_index(*stack, lowest) > list_size(*stack) / 2)
		while (get_first_a(container) != lowest)
			reverse(container, stack, TRUE);
	else
		while (get_first_a(container) != lowest)
			rotate(container, stack, TRUE);
}
