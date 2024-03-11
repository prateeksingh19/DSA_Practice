// Link = https://www.codingninjas.com/studio/problems/count-frequency-in-a-range_8365446

#include <bits/stdc++.h>
using namespace std;

vector<int> countFrequency(int n, int x, vector<int> &nums) {
    vector<int> freqArray(n);
    for (int i = 0; i < n; i++) {
        if (nums[i] <= n) {
            freqArray[nums[i] - 1]++;
        }
    }
    return freqArray;
}