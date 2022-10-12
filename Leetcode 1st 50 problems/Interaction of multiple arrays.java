class Solution {
    public List<Integer> intersection(int[][] nums) {
        Map<Integer, Integer> map = new HashMap<>();
        for(int i = 0; i < nums[0].length; i++){
            map.put(nums[0][i], 1);
        }
        
        for(int i = 1; i < nums.length; i++){
            for(int j = 0; j < nums[i].length; j++){
                if(map.containsKey(nums[i][j])){
                    map.put(nums[i][j], map.get(nums[i][j])+1);
                }
            }
        }
        
        List<Integer> list = new ArrayList<>();
        for(int i = 0; i < nums[0].length; i++){
            if(map.get(nums[0][i]) == nums.length){
                list.add(nums[0][i]);
            }
        }
        Collections.sort(list);  
        
        return list;
    }
    
}
