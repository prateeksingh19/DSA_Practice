/*
1          1
12        21
123      321
1234    4321
12345  54321
123456654321
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int k = 1;
        for (; k <= i + 1; k++) {
            cout << k;
        }
        k--;
        for (int j = 1; j < n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j < n - i; j++) {
            cout << " ";
        }
        for (; k > 0; k--) {
            cout << k;
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}