/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_action.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 14:33:13 by lduplain          #+#    #+#             */
/*   Updated: 2021/06/01 16:43:44 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	display_action(t_container *container, t_list *stack,
	char *action, t_bool display)
{
	if (!display)
		return ;
	ft_putstr(action);
	if (container->stack_a == stack)
		ft_putchar_nl('a');
	else if (container->stack_b == stack)
		ft_putchar_nl('b');
}
