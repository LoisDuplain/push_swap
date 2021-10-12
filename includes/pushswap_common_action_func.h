/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_common_action_func.h                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 17:20:51 by lduplain          #+#    #+#             */
/*   Updated: 2021/06/01 16:44:41 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_COMMON_ACTION_FUNC_H
# define PUSHSWAP_COMMON_ACTION_FUNC_H

/*
**	START CUSTOM INCLUDES
*/

# include "pushswap.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	Swap first and second value of stack (t_list *)stack.
**	./common/action/swap.c
*/
void	swap(t_container *container, t_list *stack, t_bool display);

/*
**	Push first element of stack (t_list *)from to stack (t_list *)to.
**	./common/action/push.c
*/
void	push(t_container *container, t_list **from,
			t_list **to, t_bool display);

/*
**	Push first element of stack (t_list *)stack to end of stack (t_list **)stack.
**	./common/action/rotate.c
*/
void	rotate(t_container *container, t_list **stack, t_bool display);

/*
**	Push last element of stack (t_list *)stack to start of stack (t_list **)stack.
**	./common/action/reverse.c
*/
void	reverse(t_container *container, t_list **stack, t_bool display);

/*
**	Display action as text.
**	./common/action/display_action.c
*/
void	display_action(t_container *container, t_list *stack,
			char *action, t_bool display);

#endif
