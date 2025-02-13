/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakongsa <nakongsa@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 16:48:46 by nakongsa          #+#    #+#             */
/*   Updated: 2025/02/11 10:53:26 by nakongsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (nb == 0 || power == 0)
	{
		return (1);
	}
	if (power == 2)
		return (nb * nb);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
int	main(void)
{
	printf("%i", ft_recursive_power(2, -3));
	printf("%i", ft_recursive_power(0, 0));
	printf("%i", ft_recursive_power(2, 3));
	printf("%i", ft_recursive_power(6, 3));
}*/
