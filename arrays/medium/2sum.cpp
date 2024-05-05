#include <bits/stdc++.h>
using namespace std;
vector<int> mapfind2Sum(vector<int> nums, int target, int n)
{
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int more = target - nums[i];
        if (m.find(more) != m.end())
        {
            return {m[more], i};
        }
        else
        {
            m[nums[i]] = i;
        }
    }
    return {};
}
vector<int> greedyApproach(vector<int> nums,int target,int n){
    int left=0,right=n-1;
    while(left<right){
        if(nums[left]+nums[right]==target){
            return {left,right};
        }
        else if(nums[left]+nums[right]<target){
            left++;
        }
        else{
            right--;
        }
    }
    return {};
}
int main()
{
    int n, target;
    cin >> n >> target;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    vector<int> result = mapfind2Sum(nums, target, n);
    vector<int> result2 = greedyApproach(nums,target,n);
    // for (auto i : result)
    // {
    //     cout << i << " ";
    // }
    for(auto i:result2){
        cout<<i<<" ";
    }
}