class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
       int max=0;
        int len=candies.length;
        for(int i=0;i<len;i++){
            if(max<candies[i]){
                max=candies[i];       
            }
        }
        System.out.print(max);
        List<Boolean> bo=new ArrayList<>();
        for(int i=0;i<len;i++){
            if(candies[i]+extraCandies>=max){
                bo.add(true);
            }else bo.add(false);
        }
        return bo;
    }
}
