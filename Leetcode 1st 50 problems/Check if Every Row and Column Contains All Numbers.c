bool checkValid(int** matrix, int matrixSize, int* matrixColSize){
int n,i,j;
n= *matrixColSize;

int *row;
int *column;

    row = (int*)calloc(matrixSize+1,sizeof(int));
    column = (int*)calloc(matrixSize+1,sizeof(int));

    if(n!=matrixSize){
        return 0;
    }
  
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            row[matrix[i][j]]++;
            column[matrix[j][i]]++;
            if(row[matrix[i][j]]>(i+1)){
                return 0;
            }
            if(column[matrix[j][i]]>(i+1)){
                return 0;
            }
        }
    }
 return 1;
}
