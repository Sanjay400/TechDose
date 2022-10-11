int minimumCost(int* cost, int costSize)


{

   int size=0,i=0,sum=0,count=0;
   int *a[101]={0};
    
   for(i=0;i<costSize;i++)
   {
      a[cost[i]]++;
   }
    
    
   for(i=100;i>0;i--)
   {
      while(a[i]!=0)
      {
          count++;
          a[i]--;
          
         if(count!=3) 
          sum+=i;
          else
          {
              count=0;
          }
         
      }
       
   }
    return sum;
}
