/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakongsa <nakongsa@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 13:18:42 by nakongsa          #+#    #+#             */
/*   Updated: 2025/01/30 13:23:08 by nakongsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
int main(void)
{
	int out1 = ft_str_is_uppercase("DPRGSEPR");
	int out2 = ft_str_is_uppercase("kfMFR");
	int out3 = ft_str_is_uppercase("FE6546");
	int out4 = ft_str_is_uppercase("");
	printf("%d", out1);
	printf("%d", out2);
	printf("%d", out3);
	printf("%d", out4);
}*/
