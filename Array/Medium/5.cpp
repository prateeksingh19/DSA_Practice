// Link = https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices) {
    int mini = prices[0];
    int maxProfit = 0;
    int n = prices.size();
    for (int i = 0; i < n; i++) {
        int cost = prices[i] - mini;
        maxProfit = max(maxProfit, cost);
        mini = min(mini, prices[i]);
    }
    return maxProfit;
}
