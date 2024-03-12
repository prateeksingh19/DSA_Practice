// CN Link = https://www.codingninjas.com/studio/problems/remove-duplicates-from-sorted-array_1102307

// LC Link = https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

#include <bits/stdc++.h>
using namespace std;

// TLE Issue
#include <bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int> &arr, int n) {
    set<int> s;
    for (int i = 0; i < n; i++) {
        s.insert(arr[i]);
    }
    return s.size();
}
// Optimization
int removeDuplicates(vector<int> &arr, int n) {
    int i = 0;
    for (int j = 1; j < n; j++) {
        if (arr[i] != arr[j]) {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}