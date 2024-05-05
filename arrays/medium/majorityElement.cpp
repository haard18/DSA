#include <bits/stdc++.h>
using namespace std;
int majorityUsingHash(vector<int> arr, int n)
{
    map<int, int> count;
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    for (auto i : count)
    {
        if (i.second > n / 2)
        {
            return i.first;
        }
    }
    return -1;
}
int applyVoter(vector<int> arr, int n)
{
    int el;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            count = 1;
            el = arr[i];
        }
        else if (arr[i] == el)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    int counter=0;
    for(int i=0;i<n;i++){
        if(arr[i]==el){
            counter++;
        }
    }
    if(counter>n/2){
        return el;
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i];
    // }
    int major = majorityUsingHash(arr, n);
    int major2=applyVoter(arr,n);
    cout << major2;
}