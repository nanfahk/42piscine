/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakongsa <nakongsa@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 12:35:23 by nakongsa          #+#    #+#             */
/*   Updated: 2025/01/28 15:10:40 by nakongsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	p;
	int	tmp;

	p = 0;
	while (p < size - 1)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
		p++;
	}
}
/*
int	main(void)
{
	int a[] = {5, 4, 8, 7, 1, 0, 11, 9, 2};
	int size = sizeof(a) / sizeof(a[0]);

	ft_sort_int_tab(a, size);
	int i = 0;
	while (i < size)
	{
		printf("%i", a[i]);
		i++;
	}
}*/
