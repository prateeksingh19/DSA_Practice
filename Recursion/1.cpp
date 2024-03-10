// Link =https://www.codingninjas.com/studio/problems/-print-n-times_8380707

#include <bits/stdc++.h>
using namespace std;

void printName(int n) {
    if (n == 0) {
        return;
    }
    cout << "Coding Ninjas ";
    return printName(n - 1);
}