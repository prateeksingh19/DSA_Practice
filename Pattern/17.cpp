/*
     A
    ABA
   ABCBA
  ABCDCBA
 ABCDEDCBA
ABCDEFEDCBA
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int j = 0;
        for (int k = 0; k < n - i; k++) {
            cout << " ";
        }

        for (; j <= i; j++) {
            cout << char(j + 65);
        }
        j = j - 2;

        for (; j >= 0; j--) {
            cout << char(j + 65);
        }
        cout << endl;
    }
    return 0;
}