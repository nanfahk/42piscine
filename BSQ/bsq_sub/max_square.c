/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_square.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakongsa <nakongsa@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:29:07 by nakongsa          #+#    #+#             */
/*   Updated: 2025/02/12 17:52:24 by jajaensc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	**place_x(char **map, int max_row, int max_col, int max)
{
	int	i;
	int	j;

	i = max_row;
	j = max_col;
	while (i > max_row - max)
	{
		j = max_col;
		while (j > max_col - max)
		{
			map[i][j] = g_full;
			j--;
		}
		i--;
	}
	return (map);
}

char	**max_square(int **dp_map, char **map, int row, int col)
{
	int	i;
	int	j;
	int	max;
	int	max_row;
	int	max_col;

	i = 0;
	j = 0;
	max = 0;
	while (i < row)
	{
		j = 0;
		while (j < col)
		{
			if (dp_map[i][j] > max)
			{
				max = dp_map[i][j];
				max_row = i;
				max_col = j;
			}
			j++;
		}
		i++;
	}
	return (place_x(map, max_row, max_col, max));
}
