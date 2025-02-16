/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakongsa <nakongsa@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 15:49:13 by nakongsa          #+#    #+#             */
/*   Updated: 2025/02/16 11:21:52 by nakongsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	n;

	i = 0;
	n = max - min;
	if (min >= max)
	{
		*range = (void *)0;
		return (0);
	}
	*range = (int *) malloc(sizeof(int) * (n));
	while (i < n)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (i);
}
/*
int	main(void)
{	int	min = -10;
	int	max = 10;
	int	*range;
	ft_ultimate_range(&range, min, max);
	int	i = 0;

	while (i < max - min)
	{
		printf("%i", range[i]);
		i++;
	}
	//	printf("%i", **range);
	free(range);
}*/
