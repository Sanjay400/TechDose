int* selfDividingNumbers(int left, int right, int* returnSize) {
    int* a = malloc((right - left + 1) * sizeof(int));
    int  c = -1;
    
    for (int i = left; i < right + 1; ++i) {
        int n = i;
        int d = n%10;
        while (n && d && (i%d == 0)) {
            n = n/10;
            d = n%10;
        }

        if (n == 0) a[++c] = i;
    }
    
    *returnSize = c + 1;
    return a;    
}
