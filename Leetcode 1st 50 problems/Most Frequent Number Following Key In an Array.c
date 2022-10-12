int mostFrequent(int* nums, int numsSize, int key){

int i=0;

int max=0,a=0;

int arr[1001];
for(i=0;i<1001;i++) 
{
    arr[i]=0;
}

for (i=0;i<numsSize-1;i++)
{
    if (nums[i]==key)
    {
        arr[nums[i+1]]++;
    }
}
for (i=1;i<1001;i++)
{
    if (arr[i]>max) 
    {
        max=arr[i];
        a=i;
            
    }
}

return a;
}
