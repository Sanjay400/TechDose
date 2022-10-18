int* spiralOrder(int** matrix, int matrixRowSize, int matrixColSize) {
    int * result,pt=0;
    result = (int*) malloc(sizeof(int)*matrixRowSize*matrixColSize);
    int up = 0, down = matrixRowSize-1, left = 0, right = matrixColSize-1;
    while((up <= down) || (left <= right))
    {
        if (up <= down)
        {
            for (int i = left ; i <= right ; i++)
                result[pt++] = matrix[up][i];
            up++;
        }
        if (left <= right)
        {
            for (int i = up ; i <= down ; i++)
                result[pt++] = matrix[i][right];
            right--;
        }
        if (up <= down)
        {
            for (int i = right ; i >= left ; i--)
                result[pt++] = matrix[down][i];
            down--;
        }
        if (left <= right)
        {
            for (int i = down ; i >= up ; i--)
                result[pt++] = matrix[i][left];
            left++;
        }
    }
    return result;
}
