class Solution {
    public int prefixCount(String[] words, String pref) {
        int a=0;
        for(String word: words){
            a+=(word.startsWith(pref)==true) ? 1:0;
        }
        return a;
    }
}
