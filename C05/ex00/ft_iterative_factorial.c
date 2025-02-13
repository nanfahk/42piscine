/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakongsa <nakongsa@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:29:12 by nakongsa          #+#    #+#             */
/*   Updated: 2025/02/10 15:15:31 by nakongsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = nb;
	if (nb == 0)
	{
		return (1);
	}
	else if (nb < 0)
	{
		return (0);
	}
	while (nb > 1)
	{
		fact *= (nb - 1);
		nb--;
	}
	return (fact);
}
/*
int main(void)
{	
	ft_iterative_factorial(5);
	printf("%i", ft_iterative_factorial(5));
}*/
