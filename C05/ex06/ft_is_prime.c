/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakongsa <nakongsa@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 11:24:13 by nakongsa          #+#    #+#             */
/*   Updated: 2025/02/11 18:43:03 by nakongsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb == 2)
		return (1);
	if (nb <= 1)
		return (0);
	if (nb % 2 == 0)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%i \n", ft_is_prime(2));
	printf("%i \n", ft_is_prime(3));
	printf("%i \n", ft_is_prime(67));
	printf("%i \n", ft_is_prime(17));
	printf("%i \n", ft_is_prime(1));
	printf("%i \n", ft_is_prime(9));
	printf("%i \n", ft_is_prime(-7));
}*/
