bool checkString(char * s){
    int len = strlen(s);
    for(int i = 0; i < len; i++){
        if(s[i] == 'b'){
            for(int j = i+1; j < len; j++){
                if(s[j] == 'a')
                    return false;
            }
        }
    }

    return true;
}
