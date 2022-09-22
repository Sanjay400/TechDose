class Solution {
    public void sortColors(int[] nums) {
        int x=0,y=0,n=nums.length;
        for(int num:nums){
            if(num==1) x++;
            if(num==2) y++;
            
        }
        for(int i=0;i<n;i++){
            if(i<n-(x+y)) nums[i]=0;
            else if(i<n-y) nums[i]=1;
            else nums[i]=2;
        }
    }
}
