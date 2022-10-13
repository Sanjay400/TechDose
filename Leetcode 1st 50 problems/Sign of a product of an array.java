class Solution {
    public int arraySign(int[] nums) {
        int a=0;
        for(int num: nums){
            if(num==0){
                return 0;
            }else if(num<0){
                a++;
            }
            
        }
        return a%2==0 ?1:-1;
    }
}
