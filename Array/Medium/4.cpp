// Link = https://www.codingninjas.com/studio/problems/maximum-subarray-sum_630526

#include <bits/stdc++.h>
using namespace std;

long long maxSubarraySum(vector<int> arr, int n) {
    long long max = INT_MIN;
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (sum > max) {
            max = sum;
        }
        if (sum < 0) {
            sum = 0;
        }
        if (max < 0) {
            max = 0;
        }
    }
    return max;
}