class Solution {
    public int lengthOfLongestSubstring(String s) {
        ArrayList<Character> arr = new ArrayList<Character>();
        int j=0,size=0;
        if(s.length()==1){
            size=1;
        }else{
            for(int i=j;i<s.length();){
            char t = s.charAt(i);
            if(arr.contains(t)){
                j++;
                if(arr.size()>=size){
                    size=arr.size();
                }
                arr.clear();
                i=j;
            }else{
                arr.add(t);
                if(arr.size()>=size){
                    size=arr.size();
                }
                i++;
            }
        }
        }
        
        return size;
    }
}
