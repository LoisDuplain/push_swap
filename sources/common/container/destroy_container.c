/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_container.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 17:45:16 by lduplain          #+#    #+#             */
/*   Updated: 2021/06/02 12:19:29 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	*destroy_container(t_container **container)
{
	list_clear((*container)->stack_a, destroy_stack_elem);
	(*container)->stack_a = NULL;
	list_clear((*container)->stack_b, destroy_stack_elem);
	(*container)->stack_b = NULL;
	free((*container)->sorted_values);
	(*container)->sorted_values = NULL;
	free((*container)->chunk_limits);
	(*container)->chunk_limits = NULL;
	free(*container);
	container = NULL;
	return (NULL);
}
