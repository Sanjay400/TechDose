int countEven(int num){

int count =0; int a = 0; int b = 0; 
for(int i=1 ; i<=num;i++){
   a =0; b =i;  
   while( b > 0){
       a += b%10;
       b /= 10;
   }
    if((a % 2)== 0)count++;
    }
return count;   
}
