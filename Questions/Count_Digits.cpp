// Link = https://www.codingninjas.com/studio/problems/count-digits_8416387

int countDigits(int n) {
    int count = 0;
    int i = n;
    while (i != 0) {
        int k = i % 10;
        if (k == 0) {
            i = i / 10;
            continue;
        } else if (n % k == 0) {
            count++;
        }
        i = i / 10;
    }
    return count;
}