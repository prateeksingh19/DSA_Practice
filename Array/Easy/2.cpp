// Link = https://www.codingninjas.com/studio/problems/ninja-and-the-second-order-elements_6581960

#include <bits/stdc++.h>
using namespace std;

vector<int> getSecondOrderElements(int n, vector<int> a) {
    vector<int> ans;
    int small = INT_MAX;
    int second_small = INT_MAX;
    int large = INT_MIN;
    int second_large = INT_MIN;
    for (int i = 0; i < n; i++) {
        small = min(small, a[i]);
        large = max(large, a[i]);
    }
    for (int i = 0; i < n; i++) {
        if (a[i] < second_small && a[i] != small) {
            second_small = (a[i]);
        }
        if (a[i] > second_large && a[i] != large) {
            second_large = (a[i]);
        }
    }
    ans.emplace_back(second_large);
    ans.emplace_back(second_small);
    return ans;
}
