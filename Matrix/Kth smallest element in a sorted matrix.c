int cmp(const void *x, const void *y){
    return (*(int*)x-*(int*)y);
}
int kthSmallest(int** matrix, int matrixSize, int* matrixColSize, int k){
int vector[matrixSize* *matrixColSize];
int i,j,t=0;
    for(i=0;i<matrixSize;i++){
        for(j=0;j<*matrixColSize;j++){
            vector[t++]=matrix[i][j];
        }
    }
  qsort(vector, t, sizeof(int), cmp);  
return vector[k - 1];
}
