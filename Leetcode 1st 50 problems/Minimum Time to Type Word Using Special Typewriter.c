int min(int a,int b);

int minTimeToType(char * word){
int time=0;
char prev='a';
char ch='a';
int mini=0;
for(int i=0;word[i]!='\0';){
    if(ch==word[i]){
    mini=min(abs(ch-prev),min(prev-'a'+'z'-ch+1,ch-'a'+'z'-prev+1));
    
    prev=ch;
    time+=mini+1;
      i++;
    }
    ch++;
   
}
    return time;
}

int min(int a,int b)
{
    return (a<b) ? a : b; // ternary operator
}
