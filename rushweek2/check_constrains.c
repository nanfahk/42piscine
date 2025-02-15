int check_col_constraints(int col, int *columup, int *columdown)
{
    // Check the view from the top
    int i = 0;
    int max_seen = 0;
    int visible_count = 0;
    while (i < 4)
    {
        if (mat[i][col] > max_seen)
        {
            max_seen = mat[i][col];
            visible_count++;
        }
        i++;
    }
    if (visible_count != colup[col])
    {
        return 2;
    }

    // Check the view from the bottom
    max_seen = 0;
    visible_count = 0;
    for (int j = 3; j >= 0; j--)
    {
        if (mat[j][col] > max_seen)
        {
            max_seen = mat[j][col];
            visible_count++;
        }
    }
    if (visible_count != coldown[col])
    {
        //printf("Checking column constraints for column %i\n", col);
        return 2;
    }

    return 1;
}

int check_row_constraints(int row, int *rleft, int *rright)
{
    // Check view from left
    int i = 0;
    int max_seen = 0;
    int visible_count = 0;
    while (i < 4)
    {
        if (mat[row][i] > max_seen)
        {
            max_seen = mat[row][i];
            visible_count++;
        }
        i++;
    }

    if (visible_count != rleft[row])
    {
        //printf("Checking row constraints for row %i\n", row);
        return 2;
    }

    // Check the view from the right
    int j = 3;
    max_seen = 0;
    visible_count = 0;
    while (j >= 0)
    {
        if (mat[row][j] > max_seen)
        {
            max_seen = mat[row][j];
            visible_count++;
        }
        j--;
    }
    if (visible_count != rright[row])
    {
        return 2;
    }

    return 1;
}
