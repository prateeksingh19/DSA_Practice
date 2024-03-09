// Link = https://www.codingninjas.com/studio/problems/sum-of-all-divisors_8360720

int sumOfAllDivisors(int n) {
    int ans = 0;
    int l = 1;
    while (l <= n) {
        int val = n / l;
        int r = n / val;
        ans += ((r * (r + 1)) / 2 - (l * (l - 1)) / 2) * val;
        l = r + 1;
    }

    return ans;
}