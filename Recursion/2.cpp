// Link = https://www.codingninjas.com/studio/problems/print-1-to-n_628290

#include <bits/stdc++.h>
using namespace std;

void printName(int x) {
    if (x == 1) {
        cout << x << " ";
        return;
    }
    printName(x - 1);
    cout << x << " ";
}