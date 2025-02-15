/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakongsa <nakongsa@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 16:56:01 by nakongsa          #+#    #+#             */
/*   Updated: 2025/01/25 17:20:58 by nakongsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_putchar(char c);

void	print_width(int w)
{
	int	n;

	n = 0;
	while (n < w)
	{
		if (n == 0 | n == w - 1)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
		n++;
	}
}

void	print_width2(int x)
{
	int	n;

	n = 0;
	while (n < x)
	{
		if (n == 0 | n == x - 1)
		{
			ft_putchar('|');
		}
		else
		{	
			ft_putchar(' ');
		}
		n++;
	}
}

void	rush(int x, int y)
{
	int	n;

	n = 0;
	while (n < y)
	{
		if (n == 0 | n == y - 1)
		{
			print_width(x);
		}
		else
		{
			print_width2(x);
		}
		ft_putchar('\n');
		n++;
	}
}
