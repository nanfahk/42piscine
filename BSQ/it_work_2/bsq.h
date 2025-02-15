/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakongsa <nakongsa@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 14:32:36 by nakongsa          #+#    #+#             */
/*   Updated: 2025/02/12 14:43:48 by nakongsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef BSQ_H

# define BSQ_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

/* Map Reader */
int		ft_read_map_dimensions(int fd, int *row, int *col);
void	convert_to_int_map(char **char_map, int **int_map, int row, int col);
void	print_map(char **map, int row, int col);

/* Malloc */
char	**allocate_map_char(int row, int col);
int		**allocate_map_int(int row, int col);
void	draw_first_map(int fd, char **map);
void	free_memory(char **map, int **new_map, int **dp_map, int row);

/* Dynamic */
int		**dynamic(int **dp_map, int **new_map, int row, int col);
int		min_num(int a, int b);

/* max_square */
char	**max_square(int **dp_map, char **map, int row, int col);
char	**place_x(char **map, int max_row, int max_col, int max);

#endif
