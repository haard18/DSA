#include <bits/stdc++.h>
using namespace std;
set<int> removeDuplicates(int arr[], int n)
{
    set<int> s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    return s;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    set<int> s = removeDuplicates(arr, n);
    for (auto i : s)
    {
        cout << i << " ";
    }
    
}