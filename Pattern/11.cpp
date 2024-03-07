/*
1
01
101
0101
10101
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool b;
    for (int i = 0; i < n; i++) {
        i % 2 == 0 ? b = true : b = false;
        for (int k = 0; k < i + 1; k++) {
            b ? cout << b : cout << b;
            b = !b;
        }
        cout << endl;
    }
    return 0;
}