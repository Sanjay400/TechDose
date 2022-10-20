import java.util.*;

public class Solution {
    public int calculate(String s) {
        return calc(new StringTokenizer(s, " ()+-", true));
    }
    
    int calc(StringTokenizer st){
        int value = 0;
        boolean plus = true; // last seen operator.
        while(st.hasMoreTokens()){
            int val =0;
            String next = st.nextToken();
            switch(next){
                case "(":
                    val = calc(st);
                    value += (plus ?  val : -val);
                    break;
                case ")":
                    return value;
                case "+":
                    plus = true;
                    break;
                case "-":
                    plus = false;
                    break;
                case " ": //No operation
                    break;
                default:
                    val = Integer.parseInt(next);
                    value += (plus ?  val : -val);
                    break;
            }
            
        }
        
        return value;
    }
}
