class NumArray{
    int[] sum;
    public NumArray(int[] nums){
        if(nums.length !=0){
            sum=new int[nums.length];
            sum[0]=nums[0];
            for(int i=1;i<nums.length;i++){
                sum[i]=sum[i-1]+nums[i];
            }
        }
    }
    public int sumRange(int i,int j){
        return (i==0 ? sum[j] : sum[j] - sum[i-1]);
    }
}
