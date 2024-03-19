// LC Link = https://leetcode.com/problems/two-sum/description/

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target) {
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                ans.emplace_back(i);
                ans.emplace_back(j);
                break;
            }
        }
    }
    return ans;
}

// CN Link = https://www.codingninjas.com/studio/problems/reading_6845742

string read(int n, vector<int> book, int target) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (book[i] + book[j] == target) {
                return "YES";
            }
        }
    }
    return "NO";
}

// Better Approach

string twoSum(int n, vector<int> &arr, int target) {
    sort(arr.begin(), arr.end());
    int left = 0, right = n - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            return "YES";
        } else if (sum < target)
            left++;
        else
            right--;
    }
    return "NO";
}