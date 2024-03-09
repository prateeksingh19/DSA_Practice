// Link = https://www.codingninjas.com/studio/problems/hcf-and-lcm_840448

int calcGCD(int n, int m) {
    // Euclidean's Theorem
    if (m == 0) {
        return n;
    }
    return calcGCD(m, n % m);
    // Normal Approach
    int ans = 1;
    if (n == m) {
        return n;
    }
    for (int i = 1; i <= n; i++) {
        if (n % i == 0 && m % i == 0) {
            if (i > ans) {
                ans = i;
            }
        }
    }
    return ans;
}