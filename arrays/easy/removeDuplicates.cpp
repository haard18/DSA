#include <bits/stdc++.h>
using namespace std;
set<int> bruteRemoveDuplicates(int arr[], int n)
{
    set<int> s;
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
    return s;
}
int optimalRemoveDuplicates(int arr[], int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    for(int k=0;k<n;k++){
        cout<<arr[k]<<endl;
    }
    return i+1;
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
    
    int f = optimalRemoveDuplicates(arr, n);
    for (int i = 0; i < f; i++)
    {
        cout << arr[i] << " ";
    }
}