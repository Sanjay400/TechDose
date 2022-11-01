class Solution{
public boolean isValidSudoku(char[][] board) {
        Set <String> a=new HashSet<>();
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            char n=board[i][j];
            if(n!='.'){
                if(a.contains(n+"r"+i)||a.contains(n+"c"+j)||a.contains(n+"b"+i/3+j/3)){
                return false;
                
            }
            a.add(n+"r"+i);
            a.add(n+"c"+j);
            a.add(n+"b"+i/3+j/3);
            
        }
    }
    }
    return true;
}
}
