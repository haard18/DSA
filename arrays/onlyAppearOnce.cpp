#include<bits/stdc++.h>
using namespace std;
int hashingOnlyOnceAppear(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    //time complexity is O(n)

    int hash[max+1]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    //time complexity is O(n)
    for(int i=0;i<=max;i++){
        if(hash[i]==1){
            return i;
        }
    }
    //time complexity is O(n)
    //total time complexity is O(3n)
    //hashing would not work if the array is too large
    //hashing would not work if negative numbers are present
    return -1;
}
int usingMaps(int arr[],int n){
    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto i:mp){
        if(i.second==1){
            return i.first;
        }
    }
    return -1;
}
int optimalSolution(int arr[],int n){
    int res=0;
    for(int i=0;i<n;i++){
        res=res^arr[i];
    }
    return res;
}
int main(){ 
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    // cout<<hashingOnlyOnceAppear(arr,n);
    // cout<<usingMaps(arr,n);
    cout<<optimalSolution(arr,n);

}