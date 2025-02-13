/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakongsa <nakongsa@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 12:10:50 by nakongsa          #+#    #+#             */
/*   Updated: 2025/01/30 16:55:15 by nakongsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
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
	int out1 = ft_str_is_numeric("164164");
	int out2 = ft_str_is_numeric("kf62%#*&");
	int out3 = ft_str_is_numeric("kf6546");
	int out4 = ft_str_is_numeric("");
	printf("%d", out1);
	printf("%d", out2);
	printf("%d", out3);
	printf("%d", out4);
}*/
