class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int n=nums.length;
        int curr,max=0,i=0,j=0;
        while(i<n)
        {
            while(i<n && nums[i]!=1)
                i++;
            j=i;
            while(j<n && nums[j]==1)
                j++;
            curr=j-i;
            max=Math.max(curr,max);
            i=j;
        }
        return max;
    }
}
