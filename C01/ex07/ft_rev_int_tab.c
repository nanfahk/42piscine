/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakongsa <nakongsa@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:11:03 by nakongsa          #+#    #+#             */
/*   Updated: 2025/01/28 12:34:15 by nakongsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size - i)
	{
		tmp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = tmp;
		i++;
	}
}
/*
int	main(void)
{
	int n[] = {1, 2, 3, 4, 5, 6, 7, 8};
	int size = sizeof(n) / sizeof (n[0]);

	ft_rev_int_tab(n, size);
	int i = 0;
	while ( i < size)
	{
		printf("%i",n[i]);
		i++;
	}
}*/
