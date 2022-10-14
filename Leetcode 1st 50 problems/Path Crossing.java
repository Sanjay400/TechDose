class Solution {
    public boolean isPathCrossing(String path) {
        char[] location=path.toCharArray();
        Set<String> set = new HashSet<>();
        int x=0,y=0;
        set.add(x+","+y);
        for(int i=0;i<location.length;i++){
            if(location[i]=='N')
                y++;
            else if(location[i]=='E')
                x--;
            else if(location[i]=='W')
                x++;
            else
                y--;
            
        
         if(!set.add(x+","+y));
        return true;
        }
    
    return false;
    }
}
