class Solution {
public:
    int myAtoi(string s) {
        int res=0;
        int i = 0;
        int sign=1;
        if(s[i]=='-'){
            sign=-1;
            i++;
            
        }
        while(s[i]){
            if(!(s[i]-'0'>=0 && s[i]-'0'<=9))
                return -1;
                res=res*10+s[i]-'0';
                i++;
        } 
            return res*sign;
        
    }
};
