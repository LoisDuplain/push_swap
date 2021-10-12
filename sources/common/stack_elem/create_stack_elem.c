/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack_elem.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 15:21:38 by lduplain          #+#    #+#             */
/*   Updated: 2021/05/19 15:24:32 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_stack_elem	*create_stack_elem(int value)
{
	t_stack_elem	*stack_elem;

	stack_elem = ft_calloc(1, sizeof(t_stack_elem));
	if (stack_elem != NULL)
		stack_elem->value = value;
	return (stack_elem);
}
