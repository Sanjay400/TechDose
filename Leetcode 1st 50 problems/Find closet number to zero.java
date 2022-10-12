class Solution {
    public int findClosestNumber(int[] nums) {
        int min = Integer.MAX_VALUE;
        int a = Integer.MIN_VALUE;
        
        for (int n : nums) {
            if (Math.abs(n) < min) {
                min = Math.abs(n);
                a = n;
            }
            else if (Math.abs(n) == min) {
                a = Math.max(a, n);
            }
        }
        
        return a;      
    }
}
