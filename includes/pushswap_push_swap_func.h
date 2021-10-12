/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_push_swap_func.h                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 14:16:21 by lduplain          #+#    #+#             */
/*   Updated: 2021/09/28 17:36:58 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_PUSH_SWAP_FUNC_H
# define PUSHSWAP_PUSH_SWAP_FUNC_H

/*
**	START CUSTOM INCLUDES
*/

# include "pushswap.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	Sort a stack.
**	./push_swap/sort/sort.c
*/
void	sort(t_container *container);

/*
**	Sort a stack of 2 values.
**	./push_swap/sort/sort_4_5.c
*/
void	sort_2(t_container *container, t_list *stack);

/*
**	Sort stack A containing 3 values.
**	./push_swap/sort/sort_3.c
*/
void	sort_3(t_container *container);

/*
**	Sort stack A containing 4 or 5 values.
**	./push_swap/sort/sort_4_5.c
*/
void	sort_4_5(t_container *container);

/*
**	Sort stack A containing more than 5 values.
**	./push_swap/sort/sort_big.c
*/
void	sort_big(t_container *container, int chunks);

/*
**	Put lowest value at top of stack (t_list *)stack.
**	./push_swap/sort/lowest_to_top.c
*/
void	lowest_to_top(t_container *container, t_list **stack, int lowest);

/*
**	Fill int array contained in (t_container *)container with values
**	of stack (t_list *)stack quick sorted.
**	./push_swap/sort/fill_sorted_values.c
*/
void	fill_sorted_values(t_container *container, t_list *stack);

#endif
