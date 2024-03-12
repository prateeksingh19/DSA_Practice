// CN Link = https://www.codingninjas.com/studio/problems/ninja-and-the-zero-s_6581958

// LC Link = https://leetcode.com/problems/move-zeroes/description/

#include <bits/stdc++.h>
using namespace std;

vector<int> moveZeros(int n, vector<int> a) {
    for (int i = 0, next = 0; i < a.size(); ++i) {
        if (a[i]) {
            swap(a[i], a[next++]);
        }
    }
    return a;
}
