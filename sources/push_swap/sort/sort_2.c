/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 16:34:34 by lduplain          #+#    #+#             */
/*   Updated: 2021/06/01 16:34:43 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sort_2(t_container *container, t_list *stack)
{
	int	first;
	int	second;

	first = get_stack_value(stack, 0);
	second = get_stack_value(stack, 1);
	if (first > second)
		swap(container, stack, TRUE);
}
