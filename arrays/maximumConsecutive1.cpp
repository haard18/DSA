#include <bits/stdc++.h>
using namespace std;
int maxConsecutive1(vector<int> arr , int n)
{
    int cnt=0;
    int max1=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            cnt++;
            max1=max(max1,cnt);
        }
        else{
            cnt=0;
        }

    }
    return max1;
}
int main()
{
    vector<int> nums;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    int ans = maxConsecutive1(nums, nums.size());
    cout << "The maximum  consecutive 1's are " << ans;
    return 0;
}