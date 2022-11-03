class Solution {
    public List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> ans= new ArrayList<>();
        List<Integer> current=new ArrayList<>();
        backtrack(ans,current,nums);
        return ans;
    }
        @SuppressWarnings("boxing")
    private void backtrack(
        List<List<Integer>> ans, List<Integer> current, int[] nums){
        if(current.size() != nums.length){
            for(int num:nums){
                if(current.contains(num)){
                    continue;
                }
                current.add(num);
                backtrack(ans,current,nums);
                current.remove(current.size()-1);
            }
        }else{
            
        
            ans.add(new ArrayList<>(current));
            
        }
    }
        
    
    
}
