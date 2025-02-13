/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakongsa <nakongsa@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 10:18:24 by nakongsa          #+#    #+#             */
/*   Updated: 2025/02/03 13:11:10 by nakongsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}	
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char *src = "Hello, World12345";
	int i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	char *dest = malloc(sizeof(i + 1));

	ft_strcpy(dest, src);
	printf("%s", dest);
}*/
