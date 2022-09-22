class Solution {
    public int findKthLargest(int[] nums, int k) {
        k=nums.length-1;
        int l=0,h=nums.length-1;
        while(l<=h){
            int i=l;
            for(int j=l+1;j<=h;j++)
                if(nums[j]<nums[l])
                    swap(nums,j,i++);
            swap(nums,l,i);
            if(k<i)
                h=i-1;
            else if(k>i)
                l=i+1;
            else
                return nums[i];
        }
        return -1;
    }
    void swap(int a[],int i,int j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
}
