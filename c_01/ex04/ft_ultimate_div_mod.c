/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakongsa <nakongsa@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:10:12 by nakongsa          #+#    #+#             */
/*   Updated: 2025/01/27 16:32:19 by nakongsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp_a;
	int	tmp_b;

	tmp_a = *a;
	tmp_b = *b;
	*b = tmp_a % tmp_b;
	*a = tmp_a / tmp_b;
}
/*
int main(void)
{
	int a = 10;
	int b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf(" a is %i, b is %i", a, b);
}*/
