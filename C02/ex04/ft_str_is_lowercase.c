/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakongsa <nakongsa@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 12:51:12 by nakongsa          #+#    #+#             */
/*   Updated: 2025/01/30 13:12:09 by nakongsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
	int out1 = ft_str_is_lowercase("kfthawr");
	int out2 = ft_str_is_lowercase("kfMFR");
	int out3 = ft_str_is_lowercase("kf6546");
	int out4 = ft_str_is_lowercase("");
	printf("%d", out1);
	printf("%d", out2);
	printf("%d", out3);
	printf("%d", out4);
}*/
