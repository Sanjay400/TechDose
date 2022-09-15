#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  int main(void){
      char str[127];
      scanf("%s",str);
      int len=strlen(str);
      for(int i=0;i<len;i++){
        printf("%c ",str[i]);
      }
  }
