/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_checker_func.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 15:12:29 by lduplain          #+#    #+#             */
/*   Updated: 2021/06/08 15:13:53 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_CHECKER_FUNC_H
# define PUSHSWAP_CHECKER_FUNC_H

/*
**	START CUSTOM INCLUDES
*/

# include "pushswap.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	Dispatch action.
**	./checker/dispatch.c
*/
void	dispatch(t_container *container, char *command);

#endif
