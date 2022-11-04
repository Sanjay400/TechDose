class Solution {
    String[] map={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    public List<String> letterCombinations(String digits) {
        List<String> list=new  ArrayList<>();
        if(digits.length()==0) return list;
        helper(digits,0,new StringBuilder(),list);
        return list;
    }
    private void helper(String digits,int i,StringBuilder sb, List<String> list){
        if(i==digits.length()){
            list.add(sb.toString());
            return;
        }
    
        for(char ch : map[digits.charAt(i)-'0'].toCharArray()){
            sb.append(ch);
            helper(digits, i+1, sb, list);
            sb.setLength(sb.length()-1);
    }
}
}
