// Link = https://www.codingninjas.com/studio/problems/sum-of-first-n-numbers_8876068

#include <bits/stdc++.h>
using namespace std;

int sumFirstN(int n) {
    if (n == 0) {
        return 0;
    }
    return n + sumFirstN(n - 1);
}