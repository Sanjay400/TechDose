class Solution {
    private int res=0;
    public int countPrefixes(String[] words, String s) {
        for(String word: words){
            if(s.startsWith(word)){
                res+=1;
            }
            
        }
         return res;
    }
}
