/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 16:19:48 by lduplain          #+#    #+#             */
/*   Updated: 2021/06/08 15:55:03 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sort(t_container *container)
{
	if (check(container))
		return ;
	if (container->size >= 500)
		sort_big(container, 10);
	else if (container->size >= 100)
		sort_big(container, 5);
	else if (container->size >= 50)
		sort_big(container, 4);
	else if (container->size >= 6)
		sort_big(container, 2);
	else if (container->size >= 4)
		sort_4_5(container);
	else if (container->size == 3)
		sort_3(container);
	else if (container->size == 2)
		sort_2(container, container->stack_a);
}
