#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
 char s[101];
    scanf("%s",s);
    int alpha [127]={0};
    int len=strlen(s);
    for(int i=0;i<len;i++){
      alpha[s[i]]++;
    }
    for(int i=0;i<127;i++){
      if(alpha[i]>0){
        printf("%c-%d\n",(char)i,alpha[i]);
      }
    }
}
