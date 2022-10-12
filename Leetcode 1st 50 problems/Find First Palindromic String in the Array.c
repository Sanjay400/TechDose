bool find_palindrome(char*s){

char *begin =s; char*end = s+ strlen(s)-1;
while(begin <= end){
    if(*begin !=  *end)return false;
    begin++;end--;
}
return true;
}


char * firstPalindrome(char ** words, int wordsSize){

for(int i =0;i<wordsSize ;i++){
    if(find_palindrome(words[i]))
    return words[i];
}
return ""; 
}
