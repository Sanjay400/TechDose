class Solution {
    public String truncateSentence(String s, int k) {
        String[] str = s.split(" ");
        String a="";
        for(int i=0;i<k;i++){
            a=a+str[i]+" ";
        }
        return a.trim();
    }
}
