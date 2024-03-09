// Link = https://www.codingninjas.com/studio/problems/check-armstrong_589

#include <math.h>
bool checkArmstrong(int n) {
    int count = 0;
    int ans = 0;
    int a = n;
    int b = n;
    while (b != 0) {
        b = b / 10;
        count++;
    }
    while (a != 0) {
        int k = a % 10;
        ans = ans + pow(k, count);
        a = a / 10;
    }
    if (ans == n) {
        return true;
    }
    return false;
}
