/*
 * Problem: 188. Best Time to Buy and Sell Stock IV
 * Source: LeetCode
 * URL: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/
 * Difficulty: Hard
 * Language: C++
 * Solved on: 25 Nov 2026
 * Solved at: 09:08:07 PM (UTC+05:30)
 * Solved at (UTC): 2026-11-25 15:38:07 UTC
 * Created by Anunay Srivastava
 * Synced by: DSA Tracker
 */

class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        vector<int> buy(k + 1, INT_MIN), sell(k + 1);

        for (int p : prices) {
            for (int i = 1; i <= k; i++) {
                buy[i] = max(buy[i], sell[i - 1] - p);
                sell[i] = max(sell[i], buy[i] + p);
            }
        }

        return sell[k];
    }
};