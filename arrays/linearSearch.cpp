#include<bits/stdc++.h>
using namespace std;
int linearSearch(int arr[],int n,int k){
    int found=0;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            found=i;
            return i;
        }
    }
    return -1;

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int k;
    cin >> k;
    int x=linearSearch(arr,n,k);
    cout<<x;
}