// LC Link = https://leetcode.com/problems/missing-number/

#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &nums) {
    int n = nums.size();
    int sum1 = (n * (n + 1)) / 2;
    int sum2 = 0;
    for (int i = 0; i < n; i++) {
        sum2 = sum2 + nums[i];
    }
    int ans = 0;
    return ans = sum1 - sum2;
}
