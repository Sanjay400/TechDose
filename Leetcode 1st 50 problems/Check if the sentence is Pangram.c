bool checkIfPangram(char * sentence){
     int arr[26]={0};
     for(int i=0;i<strlen(sentence);i++){
         arr[sentence[i]-'a']=1;
     }
    for(int i=0;i<26;i++){
        if(arr[i]==0){
            return false;
        }
        }
    return true;
}
