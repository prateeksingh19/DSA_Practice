// Link = https://leetcode.com/problems/palindrome-number/

bool isPalindrome(int n) {
    if (n < 0)
        return false;
    long long a;
    for (int i = n; i != 0; i = i / 10) {
        int k = i % 10;
        a = (a * 10) + k;
    }
    if (a == n)
        return true;
    return false;
}