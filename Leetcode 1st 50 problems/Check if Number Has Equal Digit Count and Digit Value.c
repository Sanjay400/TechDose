bool digitCount(char * num){
    int i,arr[10]={0};      
    for(i=0;num[i];i++)
    {
        arr[num[i]-'0']++;   
    }
    for(i=0;num[i];i++)
    {
        
        if(num[i]!=arr[i]+48)   //now check if it matches with the num[]
            return false;
    }
    return true;
}
