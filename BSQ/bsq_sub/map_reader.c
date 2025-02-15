/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_reader.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajaensc <jajaensc@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 12:40:00 by jajaensc          #+#    #+#             */
/*   Updated: 2025/02/12 21:16:49 by jajaensc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_read_map_dimensions(int fd, int *row, int *col)
{
	char	c;
	int		temp_col;

	*row = 0;
	*col = 0;
	temp_col = 0;
	while (read(fd, &c, 1) && c != '\n')
		;
	while (read(fd, &c, 1))
	{
		if (c == '\n')
		{
			(*row)++;
			if (temp_col > *col)
				*col = temp_col;
			temp_col = 0;
		}
		else
			temp_col++;
	}
	return (0);
}

void	convert_to_int_map(char **char_map, int **int_map, int row, int col)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < row)
	{
		j = 0;
		while (j < col)
		{
			if (char_map[i][j] == g_empty)
				int_map[i][j] = 1;
			else if (char_map[i][j] == g_obstacle)
				int_map[i][j] = 0;
			else
				int_map[i][j] = -1;
			j++;
		}
		i++;
	}
}

void	print_map(char **map, int row, int col)
{
	int	i;

	i = 0;
	while (i < row)
	{
		write(1, map[i], col);
		write(1, "\n", 1);
		i++;
	}
}

int	set_variables(int fd, char *empty, char *obstacle, char *full)
{
	char	c;
	int		strlen;
	char	str[100];
	int		i;

	i = 0;
	strlen = 0;
	while (read(fd, &c, 1) && c != '\n')
		str[strlen++] = c;
	while (i < strlen - 3)
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (1);
		i++;
	}
	if (ft_str_is_printable(str) == 1)
		return (1);
	*empty = str[strlen - 3];
	*obstacle = str[strlen - 2];
	*full = str[strlen - 1];
	if (empty == obstacle || empty == full || obstacle == full || strlen < 4)
		return (1);
	while (read(fd, &c, 1) && c != '\n')
		;
	return (0);
}
