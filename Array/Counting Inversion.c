#include <stdio.h>
#include <stdlib.h>
int Count(int arr[], int n)
{
    int in_count = 0;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] > arr[j])
                in_count++;
 
    return in_count;
}
 

int main()
{
    int arr[]={1, 20,6, 4, 5};
    //scanf("%d ",&arr);
    int n = sizeof(arr) / sizeof(arr[0]);
    printf(" Number of inversions are %d \n",
           Count(arr, n));
    return 0;
}
