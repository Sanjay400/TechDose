
int countElements(int* nums, int numsSize)
{
  int min,max,i=0,count=0;
    
    
 min=max=nums[i];
    
 while(i<numsSize)
 {
     min=nums[i]<min?nums[i]:min;
     max=nums[i]>max?nums[i]:max;
     i++;
 }
    
  i=0;
 
 while(i<numsSize)
 {
     if(nums[i]>min&&nums[i]<max)
     count++;
     i++;
 }
    
    return count;

}
