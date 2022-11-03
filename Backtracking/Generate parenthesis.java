class Solution {
    public List<String> generateParenthesis(int n) {
        Set<String> a=new HashSet<>();
        for(int i=0;i<n;i++){
            Set<String> b=new HashSet<>();
            for(String s: a){
                for(int j=1;j<=s.length();j++){
                    String c=s.substring(0,j) + "()" + s.substring(j);
                    b.add(c);
                }
                b.add(s + "()");
            }
            if(i==0) b.add("()");
            a=b;
        }
    
    return new LinkedList<String>(a);
    }
}
