// CN Link = https://www.codingninjas.com/studio/problems/spiral-matrix_6922069
// LC Link = https://leetcode.com/problems/spiral-matrix/description/

#include <bits/stdc++.h>
using namespace std;

vector<int> spiralMatrix(vector<vector<int>> &MATRIX) {
    int row = MATRIX.size();
    int col = MATRIX[0].size();
    vector<int> ans;

    int count = 0;
    int total = row * col;

    int startingRow = 0;
    int endingRow = row - 1;
    int startingCol = 0;
    int endingCol = col - 1;

    while (count < total) {
        for (int index = startingCol; count < total && index <= endingCol; index++) {
            ans.emplace_back(MATRIX[startingRow][index]);
            count++;
        }
        startingRow++;
        for (int index = startingRow; count < total && index <= endingRow; index++) {
            ans.emplace_back(MATRIX[index][endingCol]);
            count++;
        }
        endingCol--;
        for (int index = endingCol; count < total && index >= startingCol; index--) {
            ans.emplace_back(MATRIX[endingRow][index]);
            count++;
        }
        endingRow--;
        for (int index = endingRow; count < total && index >= startingRow; index--) {
            ans.emplace_back(MATRIX[index][startingCol]);
            count++;
        }
        startingCol++;
    }
    return ans;
}