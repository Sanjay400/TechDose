#include <bits/stdc++.h>
using namespace std;
void selectionSort(vector<int>& arr, int n){
    for(int i=0;i<n-1;i++){
        int temp=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[temp]){
                temp=j;
            }
        }
        swap(arr[i],arr[temp]);
    }
}

int main(){
    int N; 
    cin >> N;
    
    vector<int> arr(N);
    for(int &i : arr)
        cin >> i;
        
    selectionSort(arr, N);
    
    for(int i : arr)
        cout << i << " ";
    return 0;
}
