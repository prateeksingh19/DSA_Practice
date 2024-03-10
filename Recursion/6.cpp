// Link = https://www.codingninjas.com/studio/problems/reverse-an-array_8365444

#include <bits/stdc++.h>
using namespace std;

void funct(int i, int n, vector<int> &a) {
    if (i >= n / 2) {
        return;
    }
    swap(a[i], a[n - i - 1]);
    funct(i + 1, n, a);
}

vector<int> reverseArray(int n, vector<int> &nums) {
    int i = 0;
    vector<int> a(nums);
    funct(0, n, a);
    return a;
}
