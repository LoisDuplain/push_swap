/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 12:45:13 by lduplain          #+#    #+#             */
/*   Updated: 2021/06/02 16:19:55 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	main(int argc, char **argv)
{
	char		**values;
	t_container	*container;

	if (argc <= 1)
		return (0);
	if (argc == 2)
		values = ft_split(argv[1], " ");
	else
		values = &argv[1];
	container = create_container(values);
	if (container == NULL)
	{
		display_error();
		return (0);
	}
	sort(container);
	if (argc == 2)
		ft_destroy_splitted(&values);
	destroy_container(&container);
	return (0);
}
