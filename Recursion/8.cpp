// Link = https://www.codingninjas.com/studio/problems/print-fibonacci-series_7421617

#include <bits/stdc++.h>
using namespace std;

vector<int> generateFibonacciNumbers(int n) {
    vector<int> ans;
    if (n == 1) {
        ans.push_back(0);
        return ans;
    }
    if (n == 2) {
        ans = generateFibonacciNumbers(n - 1);
        ans.push_back(1);
        return ans;
    } else {
        ans = generateFibonacciNumbers(n - 1);
        ans.push_back(ans[n - 2] + ans[n - 3]);
    }
    return ans;
}