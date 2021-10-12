/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_container.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 17:41:06 by lduplain          #+#    #+#             */
/*   Updated: 2021/06/02 15:52:28 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_bool	fill_container(t_container *container, char **values)
{
	long long	value;
	int			index;

	index = -1;
	while (++index < container->size)
	{
		if (ft_strlen(values[index]) > 11 || !is_numberstr(values[index]))
			return (FALSE);
		value = ft_atoll(values[index]);
		if (value > INT_MAX || value < INT_MIN)
			return (FALSE);
		if (get_value_index(container->stack_a, value) != -1)
			return (FALSE);
		list_add_back_new(&container->stack_a, create_stack_elem((int)value));
	}
	return (TRUE);
}
