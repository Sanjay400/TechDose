class Solution {
    public String largestGoodInteger(String num) {
        String ans = "";
        for (int i = 1; i != num.length() - 1; ++i) {
            if(num.charAt(i - 1) == num.charAt(i) && num.charAt(i) == num.charAt(i + 1)) {
                if(ans.length() == 0) {
                    ans = num.substring(i - 1, i + 2);
                } else if (num.charAt(i) > ans.charAt(0)) {
                    ans = num.substring(i - 1, i + 2);
                }           
            }
        }
        return ans;
    }
}
