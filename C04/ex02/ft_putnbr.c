/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakongsa <nakongsa@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 19:49:02 by nakongsa          #+#    #+#             */
/*   Updated: 2025/02/10 12:58:50 by nakongsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long		number;

	number = nb;
	if (number <= -2147483648)
		number = -2147483648;
	else if (number >= 2147483648)
		number = 21407483648;
	if (number < 0)
	{
		write(1, "-", 1);
		number = number * (-1);
	}
	if (number >= 10)
	{
		ft_putnbr(number / 10);
	}
	number = (number % 10) + '0';
	write(1, &number, 1);
}
/*
int	main(void)
{
	ft_putnbr(42);
	ft_putnbr(-458468);
	ft_putnbr(555555555);
	ft_putnbr(2147483649);
}*/
