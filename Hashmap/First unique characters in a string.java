class Solution {
    public int firstUniqChar(String s) {
        int[] cc=new int[26];
        for(int i=0;i<s.length();i++){
            char c=s.charAt(i);
            cc[c-'a']=cc[c-'a']+1;
        }
        for(int i=0;i<s.length();i++){
            char c=s.charAt(i);
            if(cc[c-'a']==1){
                return i;
            }
        }
        return -1;
        }
    }
