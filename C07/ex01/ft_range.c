/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakongsa <nakongsa@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 13:49:46 by nakongsa          #+#    #+#             */
/*   Updated: 2025/02/15 15:33:06 by nakongsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	n;
	int	*dest;

	n = max - min;
	dest = malloc(n * sizeof(int));
	i = 0;
	if (min >= max)
		return (0);
	while (i < n)
	{
		dest[i] = min;
		i++;
		min++;
	}	
	return (dest);
}
/*
int	main(void)
{
	int min = -10;
	int max = 10;
	
	int *dest = ft_range(min, max);
	int i = 0;
	while (i < max - min)
	{
		printf("%i", dest[i]);
		//write(1, " ", 1);
		i++;
	}
	free(dest);
	return (0);
}*/	
