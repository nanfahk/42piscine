/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakongsa <nakongsa@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 12:18:31 by nakongsa          #+#    #+#             */
/*   Updated: 2025/02/16 13:44:24 by nakongsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}	
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_total_len(char **s, int size)
{
	int	i;
	int	total_len;

	i = 0;
	total_len = 0;
	while (i < size)
	{
		total_len += ft_strlen(s[i]);
		i++;
	}
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total_len;
	char	*dest;

	i = 0;
	if (size <= 0)
	{
		dest = (char *) malloc (1);
		dest[0] = '\0';
		return (dest);
	}
	total_len = ft_total_len(strs, size);
	total_len += (size - 1) * ft_strlen(sep);
	dest = (char *) malloc (sizeof(char) * (total_len + 1));
	dest[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(dest, strs[i]);
		if (i < size - 1)
			ft_strcat(dest, sep);
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	int	size = 5;
	char	*strs[5] = {"hello", "world", "one", "two", "three"};
	char	*sep = ",";
	char	*dest;

	dest = ft_strjoin(size, strs, sep);
	printf("%s", dest);
	free(dest);
}*/
