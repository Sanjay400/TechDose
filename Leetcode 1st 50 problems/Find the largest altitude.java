class Solution {
    public int largestAltitude(int[] gain) {
        int a=0,b=0;
        for(int climb: gain){
            b+=a;
            a=Math.max(a,b);
        }
        return a;
    }
}
