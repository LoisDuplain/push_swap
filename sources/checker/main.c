/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 12:45:01 by lduplain          #+#    #+#             */
/*   Updated: 2021/06/08 15:48:25 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	listen(t_container *container)
{
	t_file	*file;

	file = ft_open_file(NULL, 0);
	while (ft_read_next_line(file) == 1)
		dispatch(container, file->readed_line);
	ft_close_file(file);
}

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
	listen(container);
	if (check(container))
		ft_putstr_nl("OK");
	else
		ft_putstr_nl("KO");
	if (argc == 2)
		ft_destroy_splitted(&values);
	destroy_container(&container);
	return (0);
}
