class Solution {
    public int findMaxLength(int[] nums) {
         Map<Integer, Integer> s = new HashMap<>();
        s.put(0, -1);
        int sum = 0, max =0;//Integer.MIN_VALUE;
      for(int i=0;i<nums.length;i++){
          if(nums[i]==0){
              sum--;
          }else{
              sum++;
          }
          if(s.containsKey(sum)){
              int diff=Math.abs(s.get(sum)-i);
                  max=Math.max(max,diff);
          }else{
              s.put(sum,i);
              
          }
      }
        return max;
       
    }
}
