class Solution {
  public String digitSum(String s, int k) {
    
    while(s.length() > k){  // we check the length is greater than k
      String a = "";  // declare the string to empty to get the s
      for(int i = 0; i < s.length();){ //iterate the length
        int num = 0;
        int lim = Math.min(s.length(), i + k);
        while( i != lim) num += s.charAt(i++) - '0';
        a += String.valueOf(num);
      }
      s = a;
    }
    
    return s;  
  }
}
