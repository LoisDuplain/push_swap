/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_common_container_func.h                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 17:20:51 by lduplain          #+#    #+#             */
/*   Updated: 2021/06/08 15:50:30 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_COMMON_CONTAINER_FUNC_H
# define PUSHSWAP_COMMON_CONTAINER_FUNC_H

/*
**	START CUSTOM INCLUDES
*/

# include "pushswap.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	Create new valid container.
**	./common/container/create_container.c
*/
t_container	*create_container(char **values);

/*
**	Create new container containing stacks.
**	./common/container/init_container.c
*/
t_container	*init_container(int size);

/*
**	Check if container is correctly initialized.
**	./common/container/validate_container.c
*/
t_bool		validate_container(t_container *container);

/*
**	Fill container with user send values.
**	./common/container/fill_container.c
*/
t_bool		fill_container(t_container *container, char **values);

/*
**	Display container values.
**	./common/container/display_container.c
*/
void		display_container(t_container *container);

/*
**	Destroy and free container.
**	./common/container/destroy_container.c
*/
void		*destroy_container(t_container **container);

/*
**	Check if container is sorted.
**	./common/container/check.c
*/
t_bool		check(t_container *container);

#endif
