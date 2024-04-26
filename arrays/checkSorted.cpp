#include<bits/stdc++.h>
using namespace std;
int isSorted(int arr[],int n){
    int sorted=1;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            sorted=0;
            break;
        }
    }
    return sorted;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x=isSorted(arr,n);
    cout<<x;
    return 0;
}