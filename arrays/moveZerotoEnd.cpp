#include<bits/stdc++.h>
using namespace std;
void bruteMoveZerotoEnd(int arr[],int n){

    // cout<<count<<endl;
    vector<int> temp;
    // cout<<sizeof(temp)/sizeof(int)<<endl;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            // cout<<arr[i]<<" ";
            temp.push_back(arr[i]);
        }
    }
    for(int i=0;i<temp.size();i++){
        arr[i]=temp[i];
    }
    for(int i=temp.size();i<n;i++){
        arr[i]=0;
    }  

}
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void optimal2PointerMovement(int arr[],int n){
    int i=0;
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    if(j==-1) return;
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    // bruteMoveZerotoEnd(arr,n);
    optimal2PointerMovement(arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}