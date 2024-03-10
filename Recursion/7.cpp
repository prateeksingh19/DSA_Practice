// Link = https://www.codingninjas.com/studio/problems/check-palindrome-recursive_624386

#include <bits/stdc++.h>
using namespace std;

bool funct(int i, int n, string &str) {
    if (i >= n / 2) {
        return true;
    }
    if (str[i] != str[n - i - 1])
        return false;
    funct(i + 1, n, str);
}

bool isPalindrome(string &str) {
    int i = 0;
    int n = str.length();
    return funct(i, n, str);
}
