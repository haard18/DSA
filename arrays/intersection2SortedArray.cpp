#include<bits/stdc++.h>

using namespace std;
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	vector<int> ans;
	int i=0;
	int j=0;
	while(i<n && j<m){
		if(arr1[i]==arr2[j]){
			ans.push_back(arr1[i]);
			i++;
			j++;
		}
		else if(arr1[i]<arr2[j]){
			i++;
		}
		else{
			j++;
		}
	}
	return ans;
}
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    vector<int> arr1;
    vector<int>arr2;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr1.push_back(x);
    }
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        arr2.push_back(x);
    }
    vector<int> intersection=findArrayIntersection(arr1,n,arr2,m);
    for(int i=0;i<intersection.size();i++) cout<<intersection[i]<<" ";
    
}   