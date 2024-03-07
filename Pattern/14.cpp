/*
A
A B
A B C
A B C D
A B C D E
A B C D E F
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << char(j + 65);
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}