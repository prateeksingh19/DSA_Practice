// LC Link = https://leetcode.com/problems/max-consecutive-ones/

#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums) {
    int center = 0;
    int maxi = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 1) {
            center++;
        } else {
            maxi = max(maxi, center);
            center = 0;
        }
    }
    maxi = max(maxi, center);
    return maxi;
}
