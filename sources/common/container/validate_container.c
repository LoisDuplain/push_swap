/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_container.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 17:31:04 by lduplain          #+#    #+#             */
/*   Updated: 2021/05/19 17:24:34 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_bool	validate_container(t_container *container)
{
	if (container->size == 0)
		return (FALSE);
	if (container->stack_a != NULL)
		return (FALSE);
	if (container->stack_b != NULL)
		return (FALSE);
	return (TRUE);
}
