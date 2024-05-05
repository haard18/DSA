#include<bits/stdc++.h>
using namespace std;

int longestSubArray_better(vector<int> arr, long long k, int n) {
    map<long long,int> preSumMap; // Create a map to store prefix sums and their indices
    long long sum = 0; // Initialize the prefix sum to 0
    int maxlen = 0; // Initialize the maximum length of the subarray to 0

    // Loop through each element in the array
    for(int i = 0; i < n; i++) {
        sum += arr[i]; // Add the current element to the prefix sum

        // If the prefix sum equals the target sum (k), update maxlen to include the current element
        if(sum == k) {
            maxlen = max(maxlen, i + 1);
        }

        // Calculate the remaining sum needed to reach the target sum (k)
        long long rem = sum - k;

        // If the remaining sum exists in the prefix sum map, update maxlen with the length of the subarray
        if(preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem]; // Calculate the length of the subarray
            maxlen = max(len, maxlen); // Update maxlen if necessary
        }

        preSumMap[sum] = i; // Store the current prefix sum and its index in the map
    }

    return maxlen; // Return the maximum length of the subarray
}

int main() {
    long long n;
    cin >> n; // Input the size of the array

    vector<int> arr;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x; // Input each element of the array
        arr.push_back(x); // Add the element to the array
    }

    long long k;
    cin >> k; // Input the target sum (k)

    cout << longestSubArray_better(arr, k, n); // Output the result of the function
}
