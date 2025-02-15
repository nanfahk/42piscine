/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakongsa <nakongsa@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 14:31:12 by nakongsa          #+#    #+#             */
/*   Updated: 2025/02/12 21:26:53 by jajaensc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "bsq.h"

char		**g_map;
int			**g_new_map;
int			**g_dp_map;
int			g_row;
int			g_col;
char		g_empty;
char		g_obstacle;
char		g_full;

int	open_f(char *file)
{
	int		fd;

	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (print_error());
	if (ft_read_map_dimensions(fd, &g_row, &g_col))
	{
		close(fd);
		return (1);
	}
	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (print_error());
	if (set_variables(fd, &g_empty, &g_obstacle, &g_full) != 0)
		return (print_error());
	g_map = allocate_map_char(g_row, g_col);
	draw_first_map(fd, g_map);
	close(fd);
	return (0);
}

int	main(int argc, char **argv)
{
	int	n;

	n = 1;
	while (n < argc)
	{
		if (open_f(argv[n]) != 0)
		{
			n++;
			write(1, "\n", 1);
		}
		else
		{
			g_new_map = allocate_map_int(g_row, g_col);
			convert_to_int_map(g_map, g_new_map, g_row, g_col);
			g_dp_map = allocate_map_int(g_row, g_col);
			g_dp_map = dynamic(g_dp_map, g_new_map, g_row, g_col);
			g_map = max_square(g_dp_map, g_map, g_row, g_col);
			print_map(g_map, g_row, g_col);
			free_memory(g_map, g_new_map, g_dp_map, g_row);
			n++;
		}
	}
	return (0);
}
