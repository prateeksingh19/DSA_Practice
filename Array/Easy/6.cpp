// CN Link = https://www.codingninjas.com/studio/problems/rotate-array_1230543

#include <bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int> arr, int k) {
    int n = arr.size();
    for (int j = 0; j < k; j++) {
        for (int i = 0; i < n - 1; i++) {
            swap(arr[i], arr[i + 1]);
        }
    }
    return arr;
}

// LC Link = https://leetcode.com/problems/rotate-array/description/
