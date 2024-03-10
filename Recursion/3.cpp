// Link = https://www.codingninjas.com/studio/problems/n-to-1-without-loop_8357243

#include <bits/stdc++.h>
using namespace std;

void printName(int x) {
    if (x == 1) {
        cout << x << " ";
        return;
    }
    cout << x << " ";
    printName(x - 1);
}