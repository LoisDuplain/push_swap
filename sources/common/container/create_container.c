/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_container.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 17:46:46 by lduplain          #+#    #+#             */
/*   Updated: 2021/06/02 16:08:57 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_container	*create_container(char **values)
{
	t_container	*container;

	container = init_container(ft_get_splitted_size(values));
	if (!validate_container(container))
		return (destroy_container(&container));
	if (!fill_container(container, values))
		return (destroy_container(&container));
	return (container);
}
