/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_common_container_struct.h                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 17:20:51 by lduplain          #+#    #+#             */
/*   Updated: 2021/09/28 15:43:52 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_COMMON_CONTAINER_STRUCT_H
# define PUSHSWAP_COMMON_CONTAINER_STRUCT_H

/*
**	START CUSTOM INCLUDES
*/

# include "pushswap.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	START DEFINES
*/

typedef struct s_container
{
	int		size;
	t_list	*stack_a;
	t_list	*stack_b;
	int		*sorted_values;
	int		*chunk_limits;
}	t_container;

/*
**	END DEFINES
*/

#endif
