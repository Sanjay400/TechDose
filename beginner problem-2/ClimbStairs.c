int climbStairs(int n){
    int temp = 0;
    int a = 0;
    int b = 1;

    for (int i = 0; i < n; i++) {
        
        temp = a + b;
        a = b;
        b = temp;
    }
