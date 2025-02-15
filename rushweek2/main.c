/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakongsa <nakongsa@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 18:17:03 by nakongsa          #+#    #+#             */
/*   Updated: 2025/02/02 20:46:51 by nakongsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	mat[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};
int	set_number[16] = {};
int	colup[4] = {};
int	coldown[4] = {};
int	rowleft[4] = {};
int	rowright[4] = {};

void	print_matrix(void);
int	check_number(int n, int row, int col);
void	trackback(int row, int col);
void	check_1_and_4_rowleft(int *left);
void	check_1_and_4_colup(int *up);
void	sep_number_col_row(int *numbers);
void	check_argument(char *arg);

int	main(int argc, char **argv)
{
	if (argc < 2 || argc > 3)
	{
		write(1, "Error", 5);
		return (1);
	}
	check_argument(argv[1]);
	sep_number_col_row(set_number);
	check_1_and_4_colup(colup);
	check_1_and_4_rowleft(rowleft);
	trackback(0, 0);
}
