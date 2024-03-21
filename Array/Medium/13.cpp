// CN Link = https://www.codingninjas.com/studio/problems/subarray-sums-i_1467103

// LC Link =https://leetcode.com/problems/subarray-sum-equals-k/description/

#include <bits/stdc++.h>
using namespace std;

int findAllSubarraysWithGivenSum(vector<int> &arr, int k) {
    int n = arr.size();
    map<int, int> mpp;
    int preSum = 0, cnt = 0;

    mpp[0] = 1;
    for (int i = 0; i < n; i++) {
        preSum += arr[i];
        int remove = preSum - k;
        cnt += mpp[remove];
        mpp[preSum] += 1;
    }
    return cnt;
}