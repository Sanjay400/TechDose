int cmp(const void * a,const void * b)
{
    return ((*(int *)a)-(*(int *)b));
}
int findFinalValue(int* nums, int n, int original){
    int i = 0 ,c = 0;
    qsort(nums,n,sizeof(int),cmpfunc);
    for(int i = 0; i < n; i++)
    {
        if(nums[i]==original)
        {
            original*=2;
        }
    }
    return original;
}
