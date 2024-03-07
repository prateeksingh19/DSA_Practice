/*
A B C D E F
A B C D E
A B C D
A B C
A B
A
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << char(j + 65);
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}