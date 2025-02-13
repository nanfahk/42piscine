/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakongsa <nakongsa@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 11:01:30 by nakongsa          #+#    #+#             */
/*   Updated: 2025/02/11 18:38:06 by nakongsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
int main(void)
{
	printf("%i \n", ft_sqrt(0));
	printf("%i \n", ft_sqrt(9));
	printf("%i \n", ft_sqrt(16));
	printf("%i \n", ft_sqrt(49));
	printf("%i \n", ft_sqrt(64));
	printf("%i \n", ft_sqrt(5));
	printf("%i \n", ft_sqrt(2));
	printf("%i \n", ft_sqrt(-9));
}*/
