/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dynamic.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakongsa <nakongsa@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 14:42:32 by nakongsa          #+#    #+#             */
/*   Updated: 2025/02/12 12:31:30 by nakongsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	min_num(int a, int b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

int	**dynamic(int **dp_map, int **new_map, int row, int col)
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
			if (i == 0 || j == 0)
				dp_map[i][j] = new_map[i][j];
			else if (new_map[i][j] == 1)
				dp_map[i][j] = min_num(dp_map[i - 1][j - 1],
						min_num(dp_map[i - 1][j], dp_map[i][j - 1])) + 1;
			else
				dp_map[i][j] = 0;
			j++;
		}
		i++;
	}
	return (dp_map);
}
