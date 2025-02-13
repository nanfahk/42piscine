/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakongsa <nakongsa@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 10:21:35 by nakongsa          #+#    #+#             */
/*   Updated: 2025/01/30 16:51:32 by nakongsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{	
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			i++;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
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
	int out1 = ft_str_is_alpha("friends");
	int out2 = ft_str_is_alpha("sg46521");
	int out3 = ft_str_is_alpha("$@*(fevsdf");
	int out4 = ft_str_is_alpha("");
	printf("%d", out1);
	printf("%d", out2);
	printf("%d", out3);
	printf("%d", out4);
}*/
