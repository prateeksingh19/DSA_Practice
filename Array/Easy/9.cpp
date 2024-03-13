// Link = https://www.codingninjas.com/studio/problems/sorted-array_6613259

#include <bits/stdc++.h>
using namespace std;

vector<int> sortedArray(vector<int> a, vector<int> b) {
    vector<int> ans;
    int n = a.size();
    int m = b.size();
    int i = 0;
    int j = 0;
    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            if (ans.size() == 0 || ans.back() != a[i]) {
                ans.emplace_back(a[i]);
            }
            i++;
        } else {
            if (ans.size() == 0 || ans.back() != b[j]) {
                ans.emplace_back(b[j]);
            }
            j++;
        }
    }
    while (i < n) {
        if (ans.back() != a[i]) {
            ans.emplace_back(a[i]);
        }
        i++;
    }
    while (j < m) {
        if (ans.back() != b[j]) {
            ans.emplace_back(b[j]);
        }
        j++;
    }

    return ans;
}