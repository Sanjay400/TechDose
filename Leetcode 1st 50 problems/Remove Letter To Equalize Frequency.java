class Solution {
    public boolean equalFrequency(String word) {
        for(int i=0;i<word.length();i++){
            int[] arr=new int[29];
            int a=Integer.MAX_VALUE;
            int b=0;
            for(int j=0;j<word.length();j++){
                if(i!=j){
                    arr[word.charAt(j)-'a']++;
                }
            }
            for(int k=0;k<26;k++){
                if(arr[k]!=0){
                    a=Math.min(a,arr[k]);
                }   
            }
            for(int l=0;l<26;l++){
                if(arr[l]>a){
                    b=1;
                    break;
                }
            }
            if(b==0)
                return true;
            }
            return false;
        }
    }
