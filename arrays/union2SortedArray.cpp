#include<bits/stdc++.h>
using namespace std;
vector<int> bruteForceUnion(int arr1[], int arr2[],int n,int m){
    set<int> s;
    for(int i=0;i<n;i++){
        s.insert(arr1[i]);
    }
    for(int i=0;i<m;i++){
        s.insert(arr2[i]);
    }
    vector<int> uarray;
    for(auto i=s.begin();i!=s.end();i++){
        uarray.push_back(*i);
    }
    return uarray;
}
vector<int> optimal2PointerUnion(int arr1[],int arr2[],int n,int m){
    vector<int> unionarray;
    int i=0,j=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            if(unionarray.size()==0||unionarray.back()!=arr1[i]){
                unionarray.push_back(arr1[i]);
            }
            i++;
        }else{
            if(unionarray.size()==0||unionarray.back()!=arr2[j]){
                unionarray.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(i<n){
        if(unionarray.size()==0||unionarray.back()!=arr1[i]){
            unionarray.push_back(arr1[i]);
        }
        i++;
    }
    while(j<m){
        if(unionarray.size()==0||unionarray.back()!=arr2[j]){
            unionarray.push_back(arr2[j]);
        }
        j++;
    }
    return unionarray;
}
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    int arr1[n],arr2[m];
    for(int i=0;i<n;i++) cin>>arr1[i];
    for(int i=0;i<m;i++) cin>>arr2[i];
    // vector<int> uarray=bruteForceUnion(arr1,arr2,n,m);
    vector<int> uarray=optimal2PointerUnion(arr1,arr2,n,m);
    for(int i=0;i<uarray.size();i++) cout<<uarray[i]<<" ";
}