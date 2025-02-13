/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakongsa <nakongsa@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 15:18:21 by nakongsa          #+#    #+#             */
/*   Updated: 2025/02/11 10:54:38 by nakongsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{	
	int	i;
	int	res;

	i = 0;
	res = 1;
	if (power < 0)
	{
		return (0);
	}
	else if (nb == 0 || power == 0)
	{
		return (1);
	}
	while (i < power)
	{
		res *= nb;
		i++;
	}
	return (res);
}
/*
int	main(void)
{
	printf("%i \n",ft_iterative_power(2, 3));
	printf("%i \n",ft_iterative_power(5, -3));
	printf("%i \n",ft_iterative_power(20, 3));
	printf("%i \n",ft_iterative_power(0, 3));
}*/
