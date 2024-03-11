// Link = https://www.codingninjas.com/studio/problems/k-most-occurrent-numbers_625382

#include <bits/stdc++.h>
using namespace std;

vector<int> getFrequencies(vector<int> &v) {
    unordered_map<int, int> mpp;
    for (int i = 0; i < v.size(); i++) {
        mpp[v[i]]++;
    }
    vector<int> res;
    int max = INT_MIN;
    int min = INT_MAX;
    int max_index = INT_MAX;
    int min_index = INT_MAX;
    int ans1, ans2;
    for (auto i : mpp) {
        if (i.second > max || (i.second == max && max_index > i.first)) {
            ans1 = i.first;
            max = i.second;
            max_index = i.first;
        }
        if (i.second < min || (i.second == min && min_index > i.first)) {
            ans2 = i.first;
            min = i.second;
            min_index = i.first;
        }
    }
    return {ans1, ans2};
}