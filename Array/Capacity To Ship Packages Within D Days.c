int countDays(int* weights, int weightsSize, int cap)
{
    int i,sum=0, days = 1;
    
    for(i=0;i<weightsSize;i++)
    {
        if((sum + weights[i]) <= cap)
            sum += weights[i];
        else
        {
            sum = weights[i];
            days++;
        }
    }
    
    return days;
}

int shipWithinDays(int* weights, int weightsSize, int D){
    int low = 0, high = 0;
    int i;
    int days;
    
    for(i=0;i<weightsSize;i++)
    {
        high += weights[i];
        if(weights[i] > low)
            low = weights[i];
    }
    
    while(low<high)
    {
        int mid = low + (high-low)/2;
        days = countDays(weights,weightsSize,mid);
        if(days <= D)
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    
    return high;
}
