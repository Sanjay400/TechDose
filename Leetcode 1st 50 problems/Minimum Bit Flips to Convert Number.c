int minBitFlips(int start, int goal){

    int a = 0;
    
    while(start > 0 && goal > 0)
    {
        int r = start % 2;
        int q = goal % 2;
        a = a + !(r == q);
        start = start - r; start = start / 2;
        goal = goal - q; goal = goal/2;
    }
    
    start = fmax(start, goal);
    
    while(start > 0)
    {
        int r = start % 2;
        a= a + (r == 1);
        start = start - r; start = start / 2; 
    }
    
    return a;
    
}
