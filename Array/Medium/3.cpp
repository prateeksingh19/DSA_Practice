// Link = https://leetcode.com/problems/majority-element/

#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums) {
    map<int, int> mpp;
    for (int i = 0; i < nums.size(); i++) {
        mpp[nums[i]]++;
    }
    for (auto it : mpp) {
        if (it.second > (nums.size() / 2)) {
            return it.first;
        }
    }

    return -1;
}

// Better Approach

int majorityElement(vector<int> v) {
    int n = v.size();
    int cnt = 0;
    int el;
    for (int i = 0; i < n; i++) {
        if (cnt == 0) {
            cnt = 1;
            el = v[i];
        } else if (el == v[i])
            cnt++;
        else
            cnt--;
    }
    int cnt1 = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == el)
            cnt1++;
    }
    if (cnt1 > (n / 2))
        return el;
    return -1;
}