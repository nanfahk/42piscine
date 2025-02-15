/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   std_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakongsa <nakongsa@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:05:39 by nakongsa          #+#    #+#             */
/*   Updated: 2025/02/12 17:11:29 by nakongsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <stdio.h>
#include <unistd.h>
#define BUF

char	*std_input(void)
{
	char	buff[];
	ssize_t	byteread;

	byteread = read(0, buffer, 1);

	if (byteread == -1)
	{
		write(1, "map error", 9);
		return (1);
	}
	buffer[] = "\0";
	argv[1] = buffer;
	
