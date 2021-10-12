/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_value_index.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 14:44:14 by lduplain          #+#    #+#             */
/*   Updated: 2021/06/02 15:35:47 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	get_value_index(t_list *stack, int value)
{
	int	index;

	index = -1;
	while (++index < list_size(stack))
		if (get_stack_value(stack, index) == value)
			return (index);
	return (-1);
}
