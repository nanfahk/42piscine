/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakongsa <nakongsa@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 15:38:13 by nakongsa          #+#    #+#             */
/*   Updated: 2025/01/25 17:24:18 by nakongsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_abc(int x)
{
	int	n;

	n = 0;
	while (n < x)
	{
		if (n == 0)
		{
			ft_putchar('A');
		}
		else if (n == x - 1)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
		n++;
	}
}

void	print_b(int x)
{
	int	n;

	n = 0;
	while (n < x)
	{
		if (n == 0 | n == x - 1)
		{
			ft_putchar('B');
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
			print_abc(x);
		}
		else
		{
			print_b(x);
		}
		ft_putchar('\n');
		n++;
	}
}
