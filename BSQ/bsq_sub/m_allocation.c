/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_allocation.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajaensc <jajaensc@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 12:43:29 by jajaensc          #+#    #+#             */
/*   Updated: 2025/02/12 17:28:51 by jajaensc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	free_memory(char **map, int **new_map, int **dp_map, int row)
{
	int	i;

	i = 0;
	while (i < row)
	{
		free(map[i]);
		free(new_map[i]);
		free(dp_map[i]);
		i++;
	}
	free(map);
	free(new_map);
	free(dp_map);
}

void	draw_first_map(int fd, char **map)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	while (read(fd, &c, 1))
	{
		if (c == '\n')
		{
			map[i][j] = '\0';
			i++;
			j = 0;
		}
		else
		{
			map[i][j] = c;
			j++;
		}
	}
}

char	**allocate_map_char(int row, int col)
{
	char	**map;
	int		i;

	map = malloc(row * sizeof(char *));
	if (map == NULL)
	{
		perror("Malloc failed");
		return (NULL);
	}
	i = 0;
	while (i < row)
	{
		map[i] = malloc(col * sizeof(char));
		i++;
	}
	return (map);
}

int	**allocate_map_int(int row, int col)
{
	int		**map;
	int		i;

	map = malloc(row * sizeof(int *));
	if (map == NULL)
	{
		perror("Malloc failed");
		return (NULL);
	}
	i = 0;
	while (i < row)
	{
		map[i] = malloc(col * sizeof(int));
		i++;
	}
	return (map);
}
