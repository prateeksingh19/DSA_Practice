// Factorial

#include <bits/stdc++.h>
using namespace std;

int sumFirstN(int n) {
    if (n == 1) {
        return 1;
    }
    return n * sumFirstN(n - 1);
}