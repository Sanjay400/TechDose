#include <iostream>

using namespace std;

int main()
{
    int n,count=0,p;
    cin>>n;
    while(n>0)
        {
            n=n>>1;
            count++;
        }
        p=1<<count-1;
        
        cout<<p;
}
