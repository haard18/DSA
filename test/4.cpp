#include<bits/stdc++.h>
using namespace std;
int missingNumber(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            return i+1;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int missing=missingNumber(arr,n);
    cout<<missing;
}