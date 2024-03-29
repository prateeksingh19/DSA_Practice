// CN Link =https://www.codingninjas.com/studio/problems/rotate-the-matrix_6825090
// LC Link = https://leetcode.com/problems/rotate-image/description/

#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &matrix) {
    int n = matrix.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for (int i = 0; i < n; i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}
