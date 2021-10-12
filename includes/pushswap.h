/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 12:49:23 by lduplain          #+#    #+#             */
/*   Updated: 2021/06/08 15:15:29 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

/*
**	START CUSTOM INCLUDES
*/

# include "../libft/libft.h"

# include "pushswap_common_container_struct.h"
# include "pushswap_common_stack_elem_struct.h"

# include "pushswap_common_action_func.h"
# include "pushswap_common_container_func.h"
# include "pushswap_common_stack_elem_func.h"
# include "pushswap_common_func.h"
# include "pushswap_push_swap_func.h"
# include "pushswap_checker_func.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	Main function.
**	./(checker|push_swap)/main.c
*/
int	main(int argc, char **argv);

#endif