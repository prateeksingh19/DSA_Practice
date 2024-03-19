// Link = https://www.codingninjas.com/studio/problems/superior-elements_6783446

#include <bits/stdc++.h>
using namespace std;

vector<int> superiorElements(vector<int> &a) {
    vector<int> ans;
    int n = a.size();
    int maxi = a[n - 1];
    ans.emplace_back(a[n - 1]);
    for (int i = n - 2; i >= 0; i--) {
        if (a[i] > maxi) {
            ans.emplace_back(a[i]);
            maxi = a[i];
        }
    }
    return ans;
}
