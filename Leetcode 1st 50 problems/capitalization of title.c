char * capitalizeTitle(char * title){
int a ; // declare an integer a.
int b=0;// declare an integer b and initialize to 0.

a=strlen(title); // We get length of the title.
for(int i=0;i<=a;i++)
{
    if(title[i]>='A'&&title[i]<='Z')
    {
    title[i]+=32;
    }
    
    if(title[i]==' '||title[i]=='\0')
    {
        
            if(b>2)
            {
                title[i-b]-=32;
            }
            
        
        b=0;
        continue;
    }
    else
    {
        b++;
    }
}
return title;
}
