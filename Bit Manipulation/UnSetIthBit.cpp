#include <iostream>

using namespace std;

int main()
{
    int n,pos,p;
    cin>>n>>pos;
    p=(n&(~(1<<pos-1)));
    cout<<p;
    
}
