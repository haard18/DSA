#include<bits/stdc++.h>
using namespace std;
int missingUsingHashing(int arr[],int n){
    int hash[n+1]={0};
    for(int i=0;i<n-1;i++){
        hash[arr[i]]++;
    }
    for(int i=1;i<n;i++){
        if(hash[i]==0){
            return i;
        }
    }

}
int missingNumberusingSum(int arr[],int n){
    int actualSum=n*(n+1)/2;
    int sum=0;
    for(int i=0;i<n-1;i++){
        sum+=arr[i];
    }
    return actualSum-sum;
}
int missingNumberusingIndex(int arr[],int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]!=i+1){
            return i+1;
        }
    }
}
int missingNumberusingXOR(int arr[],int n){
    sort(arr,arr+n);
    int xor1=0;
   
    int xor2=0;
    for(int i=0;i<n-1;i++){
        xor1^=(i+1);
        xor2^=arr[i];
    }
    xor1^=n;
    return xor1^xor2;

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<missingUsingHashing(arr,n);
    cout<<missingNumberusingSum(arr,n);
    cout<<missingNumberusingIndex(arr,n);
    cout<<missingNumberusingXOR(arr,n);
}   