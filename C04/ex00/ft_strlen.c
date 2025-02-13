/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakongsa <nakongsa@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 19:21:48 by nakongsa          #+#    #+#             */
/*   Updated: 2025/02/06 19:39:15 by nakongsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	unsigned int	n;
	unsigned int	i;

	n = 0;
	i = 0;
	while (str[i])
	{
		i++;
		n++;
	}
	return (n);
}
/*
int	main(void)
{
	char *s = "hello, world";
	printf("%i", ft_strlen(s));
	printf("%lu", strlen(s));
}*/
