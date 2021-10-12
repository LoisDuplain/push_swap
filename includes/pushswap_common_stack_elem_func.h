/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_common_stack_elem_func.h                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 15:21:59 by lduplain          #+#    #+#             */
/*   Updated: 2021/06/02 15:49:26 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_COMMON_STACK_ELEM_FUNC_H
# define PUSHSWAP_COMMON_STACK_ELEM_FUNC_H

/*
**	START CUSTOM INCLUDES
*/

# include "pushswap.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	Create new stack element containing (int)value.
**	./common/stack_elem/create_stack_elem.c
*/
t_stack_elem	*create_stack_elem(int value);

/*
**	Destroy stack elemnt (void *)stack_elem.
**	./common/stack_elem/destroy_stack_elem.c
*/
void			destroy_stack_elem(void *stack_elem);

/*
**	Get value of stack element at index (int)index in stack (t_list *)stack.
**	./common/stack_elem/get_stack_value.c
*/
int				get_stack_value(t_list *stack, int index);

/*
**	Get first element value in stack A.
**	./common/stack_elem/get_first_a.c
*/
int				get_first_a(t_container *container);

/*
**	Get first element value in stack B.
**	./common/stack_elem/get_first_b.c
*/
int				get_first_b(t_container *container);

/*
**	Get last element value in stack A.
**	./common/stack_elem/get_last_a.c
*/
int				get_last_a(t_container *container);

/*
**	Get index of value (int)value in stack (l_list *)stack;
**	./common/stack_elem/get_value_index.c
*/
int				get_value_index(t_list *stack, int value);

#endif