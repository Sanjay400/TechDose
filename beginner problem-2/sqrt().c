int mySqrt(int x) {
    if(x<2){
        return x;
    }
    int start=1;
    int end=x;
    int mid=0;
    while(start<=end){
        mid=start+(end-start)/2;
        if(mid==x/mid){return mid;}
        if(mid<x/mid){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return end;
}
