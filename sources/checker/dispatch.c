/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatch.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 15:11:11 by lduplain          #+#    #+#             */
/*   Updated: 2021/06/08 15:11:35 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	dispatch_rotates(t_container *container, char *command, size_t length)
{
	if (length == 2)
	{
		if (ft_strcmp(command, "rr") == 0)
		{
			rotate(container, &container->stack_a, FALSE);
			rotate(container, &container->stack_b, FALSE);
		}
		else if (ft_strcmp(command, "ra") == 0)
			rotate(container, &container->stack_a, FALSE);
		else if (ft_strcmp(command, "rb") == 0)
			rotate(container, &container->stack_b, FALSE);
	}
	else if (length == 3)
	{
		if (ft_strcmp(command, "rrr") == 0)
		{
			reverse(container, &container->stack_a, FALSE);
			reverse(container, &container->stack_b, FALSE);
		}
		else if (ft_strcmp(command, "rra") == 0)
			reverse(container, &container->stack_a, FALSE);
		else if (ft_strcmp(command, "rrb") == 0)
			reverse(container, &container->stack_b, FALSE);
	}
}

void	dispatch_swap(t_container *container, char *command)
{
	if (ft_strcmp(command, "ss") == 0)
	{
		swap(container, container->stack_a, FALSE);
		swap(container, container->stack_b, FALSE);
	}
	else if (ft_strcmp(command, "sa") == 0)
		swap(container, container->stack_a, FALSE);
	else if (ft_strcmp(command, "sb") == 0)
		swap(container, container->stack_b, FALSE);
}

void	dispatch_push(t_container *container, char *command)
{
	if (ft_strcmp(command, "pa") == 0)
		push(container, &container->stack_b, &container->stack_a, FALSE);
	else if (ft_strcmp(command, "pb") == 0)
		push(container, &container->stack_a, &container->stack_b, FALSE);
}

void	dispatch(t_container *container, char *command)
{
	size_t	length;

	length = ft_strlen(command);
	if (command == NULL || length < 2 || length > 3)
		return ;
	if (command[0] == 'r' && length >= 2 && length <= 3)
		dispatch_rotates(container, command, length);
	else if (command[0] == 's' && length == 2)
		dispatch_swap(container, command);
	else if (command[0] == 'p' && length == 2)
		dispatch_push(container, command);
}
