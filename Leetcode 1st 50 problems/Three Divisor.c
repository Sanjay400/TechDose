bool isThree(int n){
    bool a = false;
    int i;
    for (i=2; i<=n/2; i++)
    {
        if (n % i == 0)
        {
         if (a == true)
             return false;
         a = true;
        }
    }
    return a;
}
