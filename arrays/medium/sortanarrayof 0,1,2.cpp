#include<bits/stdc++.h>
using namespace std;
vector<int> sortUsingCount(int arr[],int n){
    int c0=0,c1=0,c2=0;
    vector<int> temp(n);
    for(int i=0;i<n;i++){
        if(arr[i]==0)c0++;
        else if(arr[i]==1)c1++;
        else c2++;
    }
    for(int i=0;i<c0;i++){
        temp[i]=0;
    }
    for(int i=c0;i<c1+c0;i++){
        temp[i]=1;
    }
    for(int i=c1+c0;i<n;i++){
        temp[i]=2;
    }
    return temp;
}
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void sortUsingDNF(vector<int> &arr,int n){
    int low=0;
    int high=n-1;
    int mid=0;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    sortUsingDNF(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}