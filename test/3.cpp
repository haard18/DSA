#include<bits/stdc++.h>
using namespace std;
void rotateBykPlaces(int arr[],int n,int k){
    k=k%n;
    int temp[k];
    for(int i=0;i<k;i++){
        temp[i]=arr[i];
    }
    //shift happen here!
    for(int i=k;i<n;i++){
        arr[i-k]=arr[i];
    }
    //putting the temp array elements at the end of the array
    for(int i=0;i<k;i++){
        arr[n-k+i]=temp[i];
    }

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    rotateBykPlaces(arr,n,k);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}