char * makeFancyString(char * s){
    int len = strlen(s);
    char *res = malloc(sizeof(char)*(len+1));
    res[0] = s[0];
    if(len == 1){
        res[1] = '\0';
        return res;
    }
    res[1] = s[1];
    int a = 2;
    for(int i = 2 ; i < len ; i ++){
        if(s[i] != res[a-1] || s[i] != res[a-2]){
            res[a] = s[i];
            a++;
        }
    }
    res[a] = '\0';
    return res;
}
