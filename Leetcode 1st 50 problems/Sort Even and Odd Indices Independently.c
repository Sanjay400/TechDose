int* sortEvenOdd(int* nums, int numsSize, int* returnSize)
  {
  
      int *arr = (int*)malloc(numsSize * sizeof(int));   // size of arr in malloc.
      int temp = 0;
      for ( int i = 0 ; i < numsSize ; i++)
      {
          for ( int j = i ; j < numsSize ; j++)
          {
              if ( (i % 2 != 0) && (j %2 != 0))
              {
                  if ( nums[i] < nums[j])
                  {
                      temp = nums[i];     // swapping process
                      nums[i] = nums[j];
                      nums[j] = temp;
                  }
              }
              else if ( (i % 2 == 0) && (j % 2 == 0))
              {
               if ( nums[i] > nums[j])
                  {
                      temp = nums[i];    // swapping process
                      nums[i] = nums[j];
                      nums[j] = temp;
                  }
              }
          }
      }
      
      * returnSize = numsSize;
      return nums;
      
      
  }
