// CN Link =https://www.codingninjas.com/studio/problems/left-rotate-an-array-by-one_5026278

#include <bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int> &arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        swap(arr[i], arr[i + 1]);
    }
    return arr;
}
