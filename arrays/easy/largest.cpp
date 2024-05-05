#include<bits/stdc++.h>
using namespace std;
int getSecondLargest(int arr[],int n){
    int largest=arr[0];
    int slargest=-1;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest){
            if(arr[i]>slargest){
                slargest=arr[i];
            }
        }
    }
    return slargest;
}
int getSecondSmallest(int arr[],int n){
    int smallest=arr[0];
    int ssmallest=INT_MAX;
    for(int i=1;i<n;i++){
        if(arr[i]<smallest){
            ssmallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]>smallest){
            if(arr[i]<ssmallest){
                ssmallest=arr[i];
            }
        }
    }
    return ssmallest;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x=getSecondLargest(arr,n);
    int y=getSecondSmallest(arr,n);
    cout<<x<<endl<<y;
    return 0;
}