/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_func.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakongsa <nakongsa@student.42adel.org      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 19:50:35 by nakongsa          #+#    #+#             */
/*   Updated: 2025/02/02 20:47:13 by nakongsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

/*int mat[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};
int set_number[16] = {};
int colup[4] = {};
int coldown[4] = {};
int rowleft[4] = {};
int rowright[4] = {};*/
int ft_atoi(const char *strg);

void trackback(int row, int col)
{
    // if mat[i][j] == 0 add number && new number not in mat[i] or mat[j]
    while (row < 4)
    {
        col = 0;
        while (col < 4)
        {
            if (mat[row][col] == 0)
            {
                int n = 1;
                // check that number wont be the same
                while (n < 5)
                {
                    // check number not same in row and col
                    int check_n = check_number(n, row, col);
                    if (check_n == 0)
                    {
                        mat[row][col] = n;
                        n = 5;
                    }
                    n++;
                }
            }
            col++;
        }
        row++;
    }
    print_matrix();
}

void	check_1_and_4_rowleft(int *left)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (left[i] == 1)
		{
			mat[i][0] = 4;
		}
		else if (left[i] == 4)
		{
			mat[i][0] = 1;
			mat[i][1] = 2;
			mat[i][2] = 3;
			mat[i][3] = 4;
		}
		i++;
	}
}

void	check_1_and_4_colup(int *up)
{
	int	j;

	j = 0;
	while (j < 4)
	{
		if (up[j] == 1)
		{
			mat[0][j] = 4;
		}
		else if (up[j] == 4)
		{
			mat[0][j] = 1;
			mat[1][j] = 2;
			mat[2][j] = 3;
			mat[3][j] = 4;
		}
		j++;
	}
}

int	check_number(int n, int row, int col)
{
	int i = 0;

	while (i < 4)
	{
		if (mat[i][col] == n || mat[row][i] == n)
		{
			return (1); 
		}
		i++;
	}
    return 0;
}

int	check_argument(char *arg)
{
	char	tmp_string[2];
	int	tmp;
	int	i = 0;
	int	j = 0;
	int	n = 0;

	while (arg[i] != '\0')
	{
		if ( arg[i] != ' ')
		{
			tmp_string[0] = arg[i];
			tmp_string[1] = '\0';
			tmp = ft_atoi(tmp_string);
			set_number[j] = tmp;
			j++;
			n++;
		}
		i++;
	}
	if (n != 16)
	{
		write(1, "Error", 5);
		return (0);
	}
	return (0);
}

void	sep_number_col_row(int *numbers)
{
	int	i;
	int	j;
	int	n;
	int	m;

	i = 0;
	j = 0;
	n = 0;
	m = 0;
	while (i < 16)
	{
		if (i < 4)
		{
			colup[i] = numbers[i];
		}
		else if (i < 8 && i >= 4)
		{
			coldown[j] = numbers[i];
			j++;
		}
		else if (i >= 8 && i < 12)
		{
			rowleft[n] = numbers[i];
			n++;
		}
		else if (i >= 12 && i < 16)
		{
			rowright[m] = numbers[i];
			m++;
		}
		i++;
	}
}
