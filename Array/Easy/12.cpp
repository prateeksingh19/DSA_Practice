// CN Link = https://www.codingninjas.com/studio/problems/find-the-single-element_6680465

// LC Link = https://leetcode.com/problems/single-number/submissions/1202338551/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int> &nums) {
        int ans = 0;
        map<int, int> mpp;
        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;
        }
        for (auto &it : mpp) {
            if (it.second == 1) {
                ans = it.first;
            }
        }
        return ans;
    }
};

int getSingleElement(vector<int> &arr) {
    int ans = 0;
    for (auto i : arr) {
        ans = ans ^ i;
    }
    return ans;
}

int getSingleElement(vector<int> &arr) {
    int n = arr.size();
    for (int i = 0; i < n; i += 2) {
        if (arr[i] != arr[i + 1])
            return arr[i];
    }
    return arr[n - 1];
}