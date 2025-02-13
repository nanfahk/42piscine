/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakongsa <nakongsa@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:32:52 by nakongsa          #+#    #+#             */
/*   Updated: 2025/02/06 13:00:48 by nakongsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] == '\0' || str[i + j] == to_find[j])
		{		
			if (to_find[j] == '\0')
			{	
				return (&str[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%s", ft_strstr("ditto Hello ,world is nice", "world"));
	printf("%s", strstr("ditto Hello ,world is nice", "world"));
}*/
