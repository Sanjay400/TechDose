int orangesRotting(int** grid, int gridSize, int* gridColSize){
    bool a = true;
    bool b = false;
    for(int i=0; i<gridSize; i++){
        for(int j=0; j<gridColSize[i]; j++){
            if(grid[i][j]==1){
                if(i-1>=0 && grid[i-1][j]==2
                   || i+1<gridSize && grid[i+1][j]==2
                   || j-1>=0 && grid[i][j-1]==2
                   || j+1<gridColSize[i] && grid[i][j+1]==2){
                    grid[i][j] = -2;
                    a = false;
                }else{
                    b = true;
                }
            }
        }
    }
    for(int i=0; i<gridSize; i++){
        for(int j=0; j<gridColSize[i]; j++){
            if(grid[i][j]==-2) grid[i][j] = 2;
        }
    }
    if(a){
        if(b) return -1;
        return 0;
    }
    int time = orangesRotting(grid, gridSize, gridColSize);
    return time==-1 ? -1 : time+1;
}
