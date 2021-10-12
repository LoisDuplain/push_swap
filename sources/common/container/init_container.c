/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_container.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 17:19:30 by lduplain          #+#    #+#             */
/*   Updated: 2021/06/02 12:16:52 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_container	*init_container(int size)
{
	t_container	*container;

	container = ft_calloc(1, sizeof(t_container));
	if (container == NULL)
		return (NULL);
	container->size = size;
	container->stack_a = NULL;
	container->stack_b = NULL;
	container->sorted_values = NULL;
	container->chunk_limits = NULL;
	return (container);
}
